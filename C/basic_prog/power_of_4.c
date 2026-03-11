#include<stdio.h>
int main()
{
	int num,cnt=0;
	scanf("%d",&num);
	while(num>1)
	{
		if(num%4!=0)
		{
			cnt=1;
			break;
		}
		num=num/4;
	}
	if(cnt==1)
	{
		printf("not a power of 4\n");
	}
	else
		printf("power of 4\n");
}

