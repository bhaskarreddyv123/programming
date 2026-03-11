#include<stdio.h>
void print(int num)
{
	printf("num is %d binary is\n",num);
	for(int i=31;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
	}
	printf("\n");
}

void swapbits(int *ptr)
{
	int a,b,i;
	//printf("%d\n",*ptr);
	for(i=0;i<32;i=i+2)
	{
		a=(*ptr>>i)&1;
		b=(*ptr>>i+1)&1;
		if(a!=b)
		{
			*ptr=*ptr^(1<<i);
			*ptr=*ptr^(1<<i+1);
		}
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	print(num);
	swapbits(&num);
	print(num);
}
