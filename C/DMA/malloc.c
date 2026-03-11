#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter the number of integers\n");
	scanf("%d",&n);

	p=(int *)malloc(n*sizeof(int));

	if(p==NULL)
	{
		printf("memory not available\n");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		printf("Enter an integer\n");
		scanf("%d",p+i);
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
}


