#include<stdio.h>
int main()
{
	int num,pos;
	printf("emter number\n");
	scanf("%d",&num);
	printf("enter position\n");
	scanf("%d",&pos);
	num=num^(1<<pos);
	printf("%d\n",num);
}
