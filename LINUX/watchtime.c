#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	time_t t0;

	t0=time(NULL);

	printf("%lu sec\n ",t0);
	printf("%s\n",ctime(&t0));
}
