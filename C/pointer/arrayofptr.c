#include<stdio.h>
int main()
{
	int *ptr[5];
	int a=10,b=25,c=30,i;
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	for(i=0;i<3;i++)
	{
		printf("Address =%p   value=%d\n",ptr[i],*ptr[i]);
	}
}
