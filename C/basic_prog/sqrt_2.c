#include<stdio.h>
int main()
{
	int num,cnt=0;
	scanf("%d",&num);
	while(num>1)
	{
		if(num%2==0)
			cnt++;
		else
		{
			cnt=-1;
			break;
		}

		num=num/2;
	}
	if(cnt==-1)
		printf("%d is not a 2 to the power\n",num);
	else
		printf("%d is  of 2 to the power of %d\n",num,cnt);
}

