#include<stdio.h>
#include<string.h>
char *nonrepeated(char *ptr)
{
	int n=strlen(ptr),cnt=0;
	for(int i=0;i<n;i++)
	{
		cnt=0;
		for(int j=i+1;j<n;j++)
		{
			if(ptr[i]==ptr[j])
			{
				cnt=1;
				memmove(ptr+j,ptr+j+1,strlen(ptr+j+1)+1);
				j--;
				n--;
			}
		}
		if(cnt==1)
		{
			memmove(ptr+i,ptr+i+1,strlen(ptr+i+1)+1);
			i--;
			n--;
		}

	}
	return ptr;
}
			

int main()
{
	char str[50],*ptr;
	scanf("%[^\n]s",str);
	puts(str);
	ptr=nonrepeated(str);
	puts(ptr);
}

