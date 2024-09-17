#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int my_strcmp(char *ptr,char *str)
{
	int flag=0,n,k;
	n=strlen(ptr);
	k=strlen(str);
	if(n!=k)
	{
		return (n-k);
	}
	else
	{

		while(*ptr!='\0' && *str!='\0')
		{
			if(*ptr!=*str)
			{
				flag=1;
				break;
			}
			ptr++;
			str++;
		}
	}
	if(flag==1)
	{
		return (*ptr-*str);
	}	
	return 0;
}

int main()
{
	int a;
	char str[20],str1[30];
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	scanf("%[^\n]s",str1);
	a=my_strcmp(str,str1);
	if(a==0)
	{
		printf("both strings are equal\n");
	}
	else if(a<0)
	{
		printf("string1 is less than string2\n");
	}
	else
		printf("string1 is greater than strings\n");
}

