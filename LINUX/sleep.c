#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	time_t t0;
	t0=time(NULL);
	sleep(2);
	printf("delay %lf",difftime(time(NULL),t0));
}
