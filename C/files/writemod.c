#include <stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("test.txt","w+");
	char ch='A';
	if(fp)
	{
		while(ch<=90)
		{
			fputc(ch,fp);
			ch++;
		}
		fputc('\n',fp);
		fclose(fp);
	}
	else
	{
		printf("file not crested\n");
	}
}


