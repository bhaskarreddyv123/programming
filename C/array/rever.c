#include <stdio.h>
int reverse(int input1[],int input2)
{
	int i,temp;
	for(i=0;i<input2/2;i++)
	{
		temp=input1[i];
		input1[i]=input1[input2-i-1];
		input1[input2-i-1]=input1[i];
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



int main()
{
	int arr[30],n,res;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=reverse(arr,n);
	printf("%d",res);
}

