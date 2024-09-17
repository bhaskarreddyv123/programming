#include<stdio.h>
#include<string.h>
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
	int arr[30],n,i,j,k,cnt=0;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print(arr,n);
	/*for(i=0;i<n;i++)
	{
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
	}*/

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				cnt=1;
				memmove(arr+j,arr+j+1,sizeof(arr+j)+1);
				n--;j--;
			}
		}
	}
	if(cnt==0)
	{
		printf("there is no duplicate element\n");
	}
	print(arr,n);
}


