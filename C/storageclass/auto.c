#include<stdio.h>
int main()
{
	auto int a=9;
	//scanf("%d",&a);
	{
		int a;
		printf("%d %ld\n",a,&a);
	}
	printf("a=%d %ld\n",a,&a);
}
