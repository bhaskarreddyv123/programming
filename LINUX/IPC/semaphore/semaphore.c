//code is 2 processes using semaphores to synchronize access to shared counter in a file
//



#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/sem.h>


void sem_wait(int sem_id)
{
	struct sembuf v;
	v.sem_num=0;
	v.sem_op=-1;
	v.sem_flg=0;

	semop(sem_id,&v,1);
}

void sem_signal(int sem_id)
{
	struct sembuf v;
	v.sem_num=0;
	v.sem_op=1;
	v.sem_flg=0;

	semop(sem_id,&v,1);
}


void increment(int sem_id)
{
	int fd,cnt;
	char ch='a';

	fd=open("data.txt", O_RDWR | O_CREAT ,0666);
	perror("open");

	sem_wait(sem_id); //lock the semaphore
	
	lseek(fd,0,SEEK_SET);
	if(read(fd,&cnt,sizeof(cnt))==0)
	{
		cnt=0;   //if list is empty then initilalize  
	}
	cnt=cnt+1; // operation is doing means incrementing
        
	lseek(fd,0,SEEK_SET);	
	write(fd,&cnt,sizeof(cnt));  // writing the new counter value
	sem_signal(sem_id);  //unclock the semaphore
	close(fd);
}
int main()
{
	int sem_id,ret;
	sem_id=semget(4,2,IPC_CREAT|0666); //semaphore creating and opening
	perror("semget");
	printf("sem_id=%d\n",sem_id);

	ret=semctl(sem_id,0,SETVAL,1);   //initializing semphore to 1
	perror("semctl");
	printf("ret=%d\n",ret);


	if(fork()==0)
	{
		for(int i=0;i<3;i++)
		{
			increment(sem_id);
			printf("child process incrementd counter\n");
			sleep(1); //sleep to simulate work
		}

		exit(EXIT_SUCCESS);
	}
	else
	{
		for(int i=0;i<2;i++)
		{
			increment(sem_id);
			printf("parent process incrementd counter\n");
			sleep(1); //sleep to simulate work
		}
		
		wait(NULL); //wait for child process to finish

		//semctl(sem_id,0,IPC_RMID); // cleanup semaphore
	}
}


	



