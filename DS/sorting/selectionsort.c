/* Time complexity
 * worst case = O(n2)
 * Average case =O(n2)
 * best case = O(n2)
 *
 * space complexity
 * O(1)
 *
 */


#include<stdio.h>
void selectionsort(int arr[],int n)
{
	int i,j,temp,minindex;
	for(i=0;i<n-1;i++)
	{
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minindex])
			{
				minindex=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
void print(int *arr,int n)
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
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
        selectionsort(arr,n);
	print(arr,n);
}

