#include<stdio.h>
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void reverse(int *arr,int n)
{
	int temp,*p,*q;
	p=arr;
	q=arr+n-1;
	/*for(int i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}*/

	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q--;
	}

}



int main()
{
	int arr[50],i,j,n,cnt=0;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	reverse(arr,n);
	print(arr,n);
	for(i=0;i<n/2;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			cnt=1;
			break;
		}
	}
	if(cnt==1)
	{
		printf("array is not a palindrome\n");
	}
	else
	{
		printf("array is a palindrome\n");
	}
}
