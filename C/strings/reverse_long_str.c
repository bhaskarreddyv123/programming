#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],*ptr;
	int n,i,j,cnt=0,cnt1=0;
	scanf("%[^\n]s",str);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			if(cnt>cnt1)
			{
				cnt1=cnt;
				j=i-cnt1;
				if(j==0)
				{
					n=j+cnt1-1;
				}
				else
					n=j+cnt1;
			}
			cnt=0;
			i++;
			continue;
		}
		cnt++;
		i++;
	}
	if(str[i]=='\0')
	{
		if(cnt>cnt1)
		{
			cnt1=cnt;
			j=i-cnt1;
			n=j+cnt1-1;
		}
	}
	printf("%s long word at location %d ...and length is %d ..and end at location %d\n",str,j,cnt1,n);
	while(j<=n)
	{
		char ch=str[j];
		str[j]=str[n];
		str[n]=ch;
		j++;
		n--;
	}
	printf("%s\n",str);
}	

