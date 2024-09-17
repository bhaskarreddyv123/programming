#include<stdio.h>
void fib(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		fib(n-1);
	}
}

	
int main()
{
	int num;
	printf("enter no of elements\n");
	scanf("%d",&num);
	printf("%d %d ",0,1);
	fib(num-2);
}
