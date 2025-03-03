#include <stdio.h>

void merge(int arr[],int low,int mid,int high)
{
	int i,j,k;
	int b[20];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i<=mid)
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			k++;
			i++;
		}
	}
	else
	{
		while(j<=high)
		{
			b[k]=arr[j];
			k++;
			j++;
		}
	
	}
	
	
	for(i=low;i<=high;i++)
	{
		arr[i]=b[i];
	}
}


void mergesort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[20],i,n;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	mergesort(arr,0,n-1);
	print(arr,n);
}
