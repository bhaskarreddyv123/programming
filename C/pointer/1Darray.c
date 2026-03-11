#include<stdio.h>
int main()
{
	int arr[5],i,n;
	int *ptr;
	printf("enter no of elements\n");
	scanf("%d",&n);
	ptr=arr;

	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}

	for(i=0;i<n;i++)
	{
		printf("Address = %p   value =%d\n",ptr+i,*(ptr+i));
	}
}
