/* Time complexity
 * worst case = O(n2)
 * Average case =O(n2)
 * best case = O(n)
 *
 * space complexity
 * O(1)
 *
 */


#include<stdio.h>
void bubblesort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
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
	bubblesort(arr,n);
	print(arr,n);
}

