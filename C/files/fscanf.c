#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("test.txt","r")
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}
