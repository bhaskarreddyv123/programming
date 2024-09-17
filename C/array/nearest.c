#include<stdio.h>
int main()
{
	int arr[50],i,j,k,n,near,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		 near=(arr[i]+arr[i+1])/2;
		 for(j=n;j>i+1;j--)
		 {
			 arr[j]=arr[j-1];
		 }
		 arr[j]=near;
		 i++;
		 n++;
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
}
