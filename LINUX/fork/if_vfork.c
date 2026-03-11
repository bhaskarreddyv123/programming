#include <stdio.h>
#include <unistd.h>

int main()
{
	int ret;
	ret=vfork();
	printf("ret =%d\n",ret);
	if(ret<0)
	{
		printf("vfrok is failed\n");
	}
	else if(ret==0)
	{
		printf("child PID=%d PPID=%d\n",getpid(),getppid());
		_exit(0);
	}
	else
	{
		printf("parent PID=%d PPID=%d\n",getpid(),getppid());
	}
}
