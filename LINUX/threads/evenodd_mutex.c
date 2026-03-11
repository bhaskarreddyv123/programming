#include<pthread.h>
#include<stdio.h>

pthread_mutex_t lock;
int current=0;
void *even(void *arg)
{
	int num=*(int*)arg;

	while(1)
	{
		pthread_mutex_lock(&lock);
		if(current>num)
		{
			pthread_mutex_unlock(&lock);
			break;
		}
		if(current%2==0)
		{
			printf("even %d\n",current);
			current++;
		}
		pthread_mutex_unlock(&lock);
	}

	return NULL;
}
void *odd(void *arg)
{
	int num=*(int*)arg;
	while(1)
	{
		pthread_mutex_lock(&lock);
		if(current>num)
		{
			pthread_mutex_unlock(&lock);
			break;
		}
		if(current%2!=0)
		{
			printf("odd %d\n",current);
			current++;
		}
		pthread_mutex_unlock(&lock);
	}
	return NULL;
}
int main()
{
	int n=10;
	pthread_t t1,t2;
	pthread_create(&t1,NULL,even,&n);
	pthread_create(&t2,NULL,odd,&n);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}
