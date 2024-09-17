#include<stdio.h>
int isprime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int min,max,i,n;
	printf("enter min and max numbers\n");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		if(isprime(i))
		{
			printf("%d ",i);
		}
	}
}
