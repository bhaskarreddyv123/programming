#include<stdio.h>
int main()
{
	int arr[]={34,2,8,77,10,6,55,23,66};
	int i,j,n,mid;
	n=sizeof(arr)/sizeof(arr[0]);
	mid=n/2;
	for(i=0;i<mid;i++)
	{
		for(j=0;j<mid-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=mid;i<n;i++)
	{
		for(j=mid;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
