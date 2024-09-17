#include<stdio.h>
int sum(int a,int b)
{
	return (a+b);
}
int main()
{
	int (*ptr)(int,int);
	int a,b;
	scanf("%d %d",&a,&b);
	ptr=sum;
	printf("sum= %d\n",ptr(a,b));
}

