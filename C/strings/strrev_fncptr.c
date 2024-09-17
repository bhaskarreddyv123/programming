#include<stdio.h>
#include<string.h>
char * reverse(char *ptr)
{
	int i,n;
	char ch;
	n=strlen(ptr);
	for(i=0;i<n/2;i++)
	{
		ch=ptr[i];
		ptr[i]=ptr[n-1-i];
		ptr[n-1-i]=ch;
	}
	return ptr;
}


int main()
{
	char str[30],*str1;
	char *(*ptr)(char *);
	scanf("%[^\n]s",str);
	ptr=reverse;
	str1=ptr(str);
	printf("%s\n",str1);
}


