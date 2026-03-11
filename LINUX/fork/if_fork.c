#include <stdio.h>
#include <unistd.h>

int main()
{
	int ret;
	ret=fork();
	printf("ret =%d\n",ret);
	if(ret==0)
	{
		printf("child PID=%d PPID=%d\n",getpid(),getppid());
	}
	else
	{
		printf("parent PID=%d PPID=%d\n",getpid(),getppid());
	}
}
