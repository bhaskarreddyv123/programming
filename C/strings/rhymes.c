#include <stdio.h>
#include <string.h>

int main()
{
	char str[20][30],str1[20];
	int row,col,i,j;
	scanf("%d",&col);
	for( i=0;i<col;i++)
	{
			scanf("%s",str[i]);
	}

		for(j=0;j<col;j++)
		{
			printf("%s ",str[j]);
		}
}
