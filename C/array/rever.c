#include <stdio.h>
int reverse(int input1[],int input2)
{
	int i,temp;
	for(i=0;i<input2/2;i++)
	{
		temp=input1[i];
		input1[i]=input1[input2-i-1];
		input1[input2-i-1]=temp;
	}
	temp=0;
	for(i=0;i<input2;i++)
	{
		if(i%2==0)
		{
			temp=temp+input1[i];
		}
	}
	return temp;
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
	int arr[30],n,res;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	res=reverse(arr,n);
	print(arr,n);
	printf("%d",res);
}

