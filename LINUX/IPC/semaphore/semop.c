#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<unistd.h>
/*struct sembuf
{
	unsigned short sem_num;
	short sem_op;
	short sem_flg;
};*/

int main()
{
	struct sembuf v;
	int id,ret;
	id=semget(5,5,IPC_CREAT|0666);
	perror("semget");
	printf("id=%d\n",id);
	v.sem_num =2;
	v.sem_op =-2;
	v.sem_flg =SEM_UNDO;
	printf("before\n");
	semop(id,&v,1);
	sleep(10);
	printf("after\n");
}
