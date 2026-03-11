#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
int main(int argc, char *argv[])
{
	int ret,id;
	id=semget(1,3,IPC_CREAT|0666);
	perror("semget");
	printf("id=%d\n",id);
	ret=semctl(id,atoi(argv[1]),SETVAL,atoi(argv[2]));
	perror("semctl");
	printf("semval ret=%d\n",ret);
}
