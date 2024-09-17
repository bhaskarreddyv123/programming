#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char **ptr,str[50];
	int n,i,j;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	ptr=malloc(n*sizeof(char *));
	for(i=0;i<n;i++)
	{
		//printf("enter string\n");
		scanf("%s",str);

		ptr[i]=malloc((strlen(str)+1)*sizeof(char));
		strcpy(ptr[i],str);
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",ptr[i]);
	}
	printf("\n");
}
