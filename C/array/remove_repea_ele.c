#include<stdio.h>
#include<string.h>
void print(int arr[],int n)
{
	int i;
	//n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int i,j,k,n,arr[20],cnt=0,flag=0;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				cnt=1;
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
		if(cnt==1)
		{
			flag=1;
			for(k=i;k<n;k++)
			{
				arr[k]=arr[k+1];
			}
			//arr[i]=arr[i+1];
			i--;
			n--;
		}

	}
	if(flag==0)
	{
		printf("there is no repeated elements\n");
	}
	print(arr,n);
}


