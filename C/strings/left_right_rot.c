#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int main()
{
	char str[20],ch,temp;
	int i,j,n,pos;

	printf("enter string\n");
	scanf("%s",str);
	__fpurge(stdin);
	printf("enter l or r\n");
	scanf("%c",&ch);
	printf("enter positon\n");
	scanf("%d",&pos);
	n=strlen(str);
	if(ch=='l')
	{
		while(pos)
		{
			temp=str[0];
			for(j=0;j<n;j++)
			{
				if(j==n-1)
				{
					str[j]=temp;
				}
				else
					str[j]=str[j+1];
			}
			pos--;
		}
	}
	else if(ch=='r')
	{
		while(pos)
		{
			temp=str[n-1];
			for(j=n-1;j>=0;j--)
			{
				if(j==0)
					str[j]=temp;
				else
					str[j]=str[j-1];
			}
			pos--;
		}
	}
	printf("%s\n",str);	
}	
