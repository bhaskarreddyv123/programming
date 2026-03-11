#include<stdio.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int id;
	id=shmget(atoi(argv[1]),atoi(argv[2]),IPC_CREAT|0666);
	perror("shmget");
	printf("id=%d\n",id);
}
