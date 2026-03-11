#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
int main()
{
	int i,id,fd;
	struct sembuf v;
	char a[]="VALLURU";

	fd=open("data",O_RDWR | O_CREAT| O_APPEND,0666);

	id=semget(4,5,IPC_CREAT|0666);
	perror("semget");

	v.sem_num =0;
	v.sem_op=2;
	v.sem_flg=SEM_UNDO;

	printf("Before op\n");
	semop(id,&v,1);
	printf("After op\n");

	for(i=0;a[i];i++)
	{
		write(fd,&a[i],1);
	}
	printf("Done\n");
	/*v.sem_num =1;
	v.sem_op=2;
	v.sem_flg=SEM_UNDO;

	printf("Before op\n");
	semop(id,&v,1);
	printf("After op\n");*/
}

