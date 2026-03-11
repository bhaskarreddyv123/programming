#include<stdio.h>
#include<pthread.h>

int num=100;
int cnt=1;
pthread_mutex_t mutex;
pthread_cond_t cond;

void *even(void *arg)
{
	while(1)
	{
		pthread_mutex_lock(&mutex);
		while(cnt<=num && cnt%2==1)
			pthread_cond_wait(&cond,&mutex);
			
		if(cnt>num)
		{
			pthread_mutex_unlock(&mutex);
			pthread_cond_signal(&cond);
			break;
		}
		printf("%d ",cnt);
		cnt++;
		pthread_cond_signal(&cond);
		pthread_mutex_unlock(&mutex);
	}

	return NULL;
}

void *odd(void *arg)
{
	while(1)
	{
		pthread_mutex_lock(&mutex);
		while(cnt<=num && cnt%2==0)
			pthread_cond_wait(&cond,&mutex);

		if(cnt>num)
		{
			pthread_cond_signal(&cond);
			pthread_mutex_unlock(&mutex);
			break;
		}

		printf("%d ",cnt);
		cnt++;

		pthread_mutex_unlock(&mutex);
		pthread_cond_signal(&cond);
	
	}

	return NULL;
}

int main()
{
	pthread_t T1,T2;
	pthread_mutex_init(&mutex,NULL);
	pthread_create(&T1,NULL,even,NULL);
	pthread_create(&T2,NULL,odd,NULL);

	pthread_join(T1,NULL);
	pthread_join(T2,NULL);

	pthread_cond_destroy(&cond);
	pthread_mutex_destroy(&mutex);
}

