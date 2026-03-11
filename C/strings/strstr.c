#include<stdio.h>
#include<stdio_ext.h>

char *my_strstr(char *ptr,char *str)
{
	char *p,*s;
	while(*ptr!='\0')
	{
		p=ptr;
		s=str;
		while(*p!='\0' && *s!='\0' && *p==*s)
		{
			p++;
			s++;
		}
		if(*s=='\0')
		{
			return ptr;
		}
		ptr++;
	}
	return NULL;
}
int main()
{
	char str[50],substr[20];
	char *n;
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	scanf("%[^\n]s",substr);
	n=my_strstr(str,substr);
	//printf("%s\n",n);
	if(n!=NULL)
	{
		printf("found at %ld location\n",n-str);
	}
	else
	{
		printf("not found\n");
	}
}
	

	

