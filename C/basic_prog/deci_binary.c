#include<stdio.h>
int main()
{
	int num,bit=31;
	scanf("%d",&num);
	/*while(bit>=0)
	{
		printf("%d",(num>>bit)&1);
		bit--;
	}*/
	for(int i=0;num>0;i++)
	{
		printf("%d",num%2);
		num=num/2;
	}
	printf("\n");
}
