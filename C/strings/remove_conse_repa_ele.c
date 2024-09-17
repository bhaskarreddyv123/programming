#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	scanf(" %[^\n]s",str);
	for(int i=0;str[i];i++)
	{
		if(str[i]==str[i+1])
		{
			memmove(&str[i],&str[i]+2,strlen(&str[i]+2)+1);
			i--;
		}
	}
	printf("%s\n",str);
}
