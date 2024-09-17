#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],str1[30],ch;
	int n,n1,i,j;
	gets(str);
	gets(str1);
	n=strlen(str);
	n1=strlen(str1);
	if(n!=n1)
	{
		printf("not an anagram strings\n");
		return 0;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[j]>str[j+1])
			{
				ch=str[j];
				str[j]=str[j+1];
				str[j+1]=ch;
			}
			if(str1[j]>str1[j+1])
                        {
                                ch=str1[j];
                                str1[j]=str1[j+1];
                                str1[j+1]=ch;  
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(str[i]!=str1[i])
		{
			printf("Not an anagram strings\n");
			return 0;
		}
	}
	printf("Anagram strins\n");
}

