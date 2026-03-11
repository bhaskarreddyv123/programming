#include<stdio.h>
#include<pthread.h>

void *even_odd(void *arg)
{
	int num= *(int *)arg;
	for(int i=0;i<num;i++)
	{
		if(i%2==0)
			printf("even %d\n",i);
		else
			printf("odd %d\n",i);
	}
	return NULL;
}

int main()
{
	pthread_t t,t1;
	int n;
	printf("enter no.of elements ");
	scanf("%d",&n);
	pthread_create(&t,NULL,even_odd,&n);
	//pthread_create(&t1,NULL,even_odd,&n);
	pthread_join(t,NULL);
	pthread_join(t1,NULL);
}
