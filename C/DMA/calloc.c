#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n,i;

	printf("enter no of elements\n");
	scanf("%d",&n);
	p=(int *)calloc(5,sizeof(int));

	if(p==NULL)
	{
		printf("memory not allocated\n");
		return 0;
	}

	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
}

