#include<stdio.h>
int main()
{
	int num,temp,sum=0;
	scanf("%d",&num);
	while(num)
	{
		sum=sum*10+num%10;
		num=num/10;
	}
	printf("%d\n",sum);
}

