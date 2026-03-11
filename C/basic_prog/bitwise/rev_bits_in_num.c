#include<stdio.h>
void print(int n)
{
	for(int i=31;i>=0;i--)
	{
		printf("%d",(n>>i)&1);
	}
	printf("\n");
}
int main()
{
	unsigned int num,rev=0;
	printf("Enter number\n");
	scanf("%d",&num);
	print(num);
	for(int i=0;i<32;i++)
	{
		rev=rev<<1;   //make space for next bit
		rev=rev | (num &1); //copy LSB of num into rev
		//printf("num=%d rev=%d\n",num,rev); 
		num=num>>1; //right shifting num for next bit
	}

	printf("%u\n",rev);
	print(rev);
}
	
