#include<stdio.h>
int main()
{
	int arr[20],n,maxi,mini,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mini=arr[0];
	maxi=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>maxi)
		{
			maxi=arr[i];
		}
		else if(arr[i]<mini)
		{
			mini=arr[i];
		}
	}
	printf("maxi= %d  mini= %d\n",maxi,mini);
}


