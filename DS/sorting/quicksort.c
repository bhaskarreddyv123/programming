/* Time complexity
 * Best case :O(nlogn)
 * Average case: O(nlogn)
 * Worst case : O(n^2)
 * space complexity : O(nlogn)
 *
 */




#include<stdio.h>

int partition(int arr[],int low,int high)
{
	int pivot,i,temp,j;
	pivot=arr[high];
	i=low;
	for(j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	}
	temp=arr[i];
	arr[i]=arr[high];
	arr[high]=temp;

	return i;
}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
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
	int arr[20],n,i;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	quicksort(arr,0,n-1);
	print(arr,n);
}
