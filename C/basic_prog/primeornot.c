#include<stdio.h>
int main()
{
	int num,i,n=0;
	printf("enter number\n");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("not a prime number\n");
			return 0;

		}
	}
	if(n==0)
		printf("it is a prime number\n");
}

