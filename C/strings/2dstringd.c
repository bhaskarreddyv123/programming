#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

int main()
{
	char **ptr;
	int r,c,i,j;
	printf("enter rows and columns\n");
	scanf("%d%d",&r,&c);
	getchar();
	ptr=malloc(r*sizeof(char *));
	for(i=0;i<r;i++)
	{
		ptr[i]=malloc(c*sizeof(char ));
	}

	for(i=0;i<r;i++)
	{
		fgets(ptr[i],c,stdin);
		int len=strlen(ptr[i]);
		if(ptr[i][len-1]=='\n')
		{
			ptr[i][len-1]='\0';
		}
		//scanf("%[^\n]s",ptr[i]);
		//__fpurge(stdin);
	}
	for(i=0;i<r;i++)
	{
		printf("%s\n",ptr[i]);
		free(ptr[i]);
	}
	free(ptr);
}
