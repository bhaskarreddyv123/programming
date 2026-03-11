#include<stdio.h>
int main()
{
	int num,cnt=0,cnt1=0,bit=31;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(bit>=0)
	{
		if((num>>bit)&1)
		{
			cnt++;
		}
		else
		{
			if(cnt1<cnt)
			{
				cnt1=cnt;
				cnt=0;
			}
		}
		bit--;
	}
	if(cnt1==0)
		cnt1=cnt;
	printf("%d\n",cnt1);
}

