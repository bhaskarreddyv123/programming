#include <stdio.h>
#include <string.h>
char *reverse(char *ptr)
{
	int n;
	char temp,*p,*q;
	n=strlen(ptr);
	p=ptr;
	q=ptr+n-1;

	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q--;
	}
	return ptr;
}
int main()
{
	char str[]="bhargavi",*ptr;
	/*int n;
        char temp,*p,*q;
	ptr=str;
        n=strlen(ptr);
        p=ptr;
        q=ptr+n-1;

        while(p<q)
        {
                temp=*p;
                *p=*q;
                *q=temp;
                p++;
                q--;
        }*/
	ptr=reverse(str);
	printf("%s\n",ptr);
}
