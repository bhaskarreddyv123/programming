#include<stdio.h>
int main()
{
	int arr[20],i,j=0,n,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter seaching element\n");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==arr[i])
		{
			printf("num %d is found at %d\n",arr[i],i);
			j=1;
		}
	}
	if(j==0)
		printf("number is not found\n");
}
