#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i=0;
	scanf("%[^\n]s",str);
	while(str[i])
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		
		}
		i++;
	}
	printf("%s\n",str);
}

