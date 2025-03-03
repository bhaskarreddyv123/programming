#include<stdio.h>
int binarysearch(int *arr, int n, int num)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==num)
		{
			return 0;
		}
		else if(num>arr[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[20],i,j,n,num;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("sorting the array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[i]<arr[j])
			{
				num=arr[i];
				arr[i]=arr[j];
				arr[j]=num;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	printf("enter num to serach\n");
	scanf("%d",&num);
	num=binarysearch(arr,n,num);
	if(num==-1)
	{
		printf("number not found\n");
	}
	else
	{
		printf("number found\n");
	}
}
