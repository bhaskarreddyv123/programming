#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **arr,i,j,row,col,a[5][5];
	printf("sizeof a %ld\n",sizeof(a));
	scanf("%d %d",&row,&col);
	arr=(int **)malloc(row*sizeof(int *));
	printf("sizeof **arr %ld\n",sizeof(arr));
	for(i=0;i<col;i++)
	{
		arr[i]=(int *)malloc(col*sizeof(int));
	}
	printf("final size %ld\n",sizeof(arr));
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr[i][j]=j;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
