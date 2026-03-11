#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="aa#b$ccc#AAAA",str1[20],ch;            //a2#b1$c3#
	int i=0,j=0,n,cnt;
	while(str[i]!='\0')
	{
		ch=str[i];
		str1[j++]=ch;
		cnt=0;

		if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
		{
			while(ch==str[i])
			{
				cnt++;
				i++;
			}
		}
		if(cnt>0)
		{
			str1[j++]=cnt+48;
			continue;
		}
		i++;
	}
	str1[j]='\0';
	printf("%s\n",str1);
}




