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
	int i,j,k,n,arr[20],cnt=0;;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
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
		printf("%d ",arr[j]);
		}
		printf("%d ",arr[i]);
		i--;
	}
	if(cnt==0)
	{
		printf("there is no repeated elements\n");
	}
	print(arr,n);
}


