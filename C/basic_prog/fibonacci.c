#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,num;
	printf("enter number\n");
	scanf("%d",&num);
	printf("%d %d ",n1,n2);
	for(int i=2;i<num;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	printf("\n");
}

