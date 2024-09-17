#include<stdio.h>
#include<string.h>
void reverseword(char *ptr,int i,int j)
{
	while(i<j)
	{
		char temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
		i++;
		j--;
	}
	//printf("%s\n",ptr);
}
void reverse(char *ptr)
{
	int i,j=0;
	for(i=0;ptr[i];i++)
	{
		if(ptr[i]==' ')
		{
			reverseword(ptr,j,i-1);
			j=i+1;
		}
	}
	reverseword(ptr,j,i-1);
	reverseword(ptr,0,i-1);
}
int main()
{
	char str[40];
	scanf("%[^\n]s",str);
	reverse(str);
	printf("%s\n",str);
}

