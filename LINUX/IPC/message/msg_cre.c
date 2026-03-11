#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int id;
	if(argc!=2)
	{
		printf("error argument\n");
		return 0;
	}
	id=msgget(atoi(argv[1]),IPC_CREAT|0666);
	if(id<0)
	{
		perror("msg create:\n");
		return 0;
	}
	printf("id= %d\n",id);
}

