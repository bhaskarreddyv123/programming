#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void reverse(char *ptr,int n)
{
	char *p,*q;
	p=ptr;
	q=ptr+n-1;
	while(p<q)
	{
		char ch=*p;
		*p=*q;
		*q=ch;
		p++;
		q--;
	}
}
int main()
{
	char str[30],str1[20],*ptr;
	int n,len;
	printf("enter string\n");
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}
	printf("enter substring\n");
	fgets(str1,sizeof(str1),stdin);
	len = strlen(str1);
	if (len > 0 && str1[len - 1] == '\n') {
		str1[len - 1] = '\0';
	}
	ptr=str;
	n=strlen(str1);
	while((ptr=strstr(ptr,str1))!=NULL)
	{
		reverse(ptr,n);
		ptr=ptr+n;
	}
	printf("%s",str);
}
