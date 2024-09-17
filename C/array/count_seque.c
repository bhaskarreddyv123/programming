#include <stdio.h>

int main()
{
	int arr[50],n,i,cnt=0;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			while(i<n)
			{
				if(arr[i]==arr[i+1])
					i++;
				else
					break;
			}
			cnt++;
		}
	}
	printf("cnt =%d\n",cnt);
}


