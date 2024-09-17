#include<stdio.h>
#include<string.h>
int strlenth(char *ptr)
{
	int cnt=0;
	while(*ptr)
	{
		cnt++;
		ptr++;
	}
	return cnt;
}
int main()
{
	char str[30];
	int len;
	scanf("%[^\n]s",str);
	len=strlenth(str);
	printf("%d %ld\n",len,strlen(str));
}
