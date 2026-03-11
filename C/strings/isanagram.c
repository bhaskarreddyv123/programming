#include <stdio.h>
#include <string.h>

int isanagram(char *ptr1,char *ptr2)
{
	int n1,n2,i,j;
	char ch;
	n1=strlen(ptr1);
	n2=strlen(ptr2);
	if(n1!=n2)
	{
		return 0;
	}
	for(i=0;i<n1-1;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(ptr1[j]>ptr1[j+1])
			{
				ch=ptr1[j];
				ptr1[j]=ptr1[j+1];
				ptr1[j+1]=ch;
			}
			if(ptr2[j]>ptr2[j+1])
			{
				ch=ptr2[j];
				ptr2[j]=ptr2[j+1];
				ptr2[j+1]=ch;
			}
		}
	}
	for(i=0;i<n1;i++)
	{
		if(ptr1[i]!=ptr2[i])
			return 0;
	}
	if(i==n1)
		return 1;
}
int main()
{
	int T;
	char str1[20],str2[20];
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		scanf("%s %s",str1,str2);
		if(isanagram(str1,str2))
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
}
