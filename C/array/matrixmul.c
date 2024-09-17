#include<stdio.h>
void multiplication(int (*a)[10],int (*b)[10],int (*mul)[10],int m,int n)
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			mul[i][j]=0;
			for(k=0;k<n;k++)
			{
				mul[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
}
void print(int (*a)[10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10][10],b[10][10],m,n,i,j,mul[10][10];
	scanf("%d %d",&m,&n);
	printf("enter matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	multiplication(a,b,mul,m,n);
	printf("1st matrix is...\n");
	print(a,m,n);
	printf("2nd matrix is...\n");
	print(b,m,n);
	printf("result matrix is...\n");
	print(mul,m,n);
}


