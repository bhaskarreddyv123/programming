#include <stdio.h>
#include <string.h>

int main()
{
	char str[50],substr[20],*ptr=NULL;
	scanf(" %[^\n]s",str);
	printf("enter substring\n");
	scanf(" %[^\n]s",substr);
	ptr=str;
	while((ptr=strstr(ptr,substr))!=NULL)
	{
		memset(ptr,'*',strlen(substr));
		ptr=ptr+strlen(substr);
	}
	printf("%s\n",str);
}


