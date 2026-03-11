#include <stdio.h>
#include <unistd.h>
int main()
{
	fork();
	printf("Hai PID=%d PPID=%d\n",getpid(),getppid());
	vfork();
	vfork();
	printf("Hello PID=%d PPID=%d\n",getpid(),getppid());
}
