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
void insertionsort(int arr[],int n)
{
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
	insertionsort(arr,n);
	print(arr,n);
}

