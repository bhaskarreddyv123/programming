#include<stdio.h>
#include<string.h>
int main()
{
	char str[15];
	int num=0,i,j,n;
	scanf("%[^\n]s",str);
	i=0;
	while(str[i])
	{
		if(str[i]>=48 && str[i] <=57)
		{
			num=num*10+(str[i]-48);
		}
		else
		{
			printf("not a correct string\n");
			return 0;
		}
		i++;
	}
	printf("%d\n",num);
}
