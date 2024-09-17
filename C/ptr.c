#include<stdio.h>
int main()
{
	char *s[]={"bhaskar","bhargavi","akhila","syam"};
	char **ptr[]={s,s+1,s+3,s+2};
	for(int i=0;i<4;i++)
	{
		printf("%s ",*ptr[i]);
	}
	printf("\n");
}



