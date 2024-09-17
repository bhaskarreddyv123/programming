#include<stdio.h>
#include<string.h>
int power(int x,int y)
{
	int z=1;
	while(y)
	{
		z=z*2;
		y--;
	}
	return z;
}
int main()
{
	char str[33];
	int n,i,n1,cnt=0,num=0;
	scanf("%[^\n]s",str);
	n=strlen(str);
	i=0;
	while(str[i])
	{
		if(str[i]=='0' || str[i]=='1')
		{
			cnt++;
		}
		i++;
	}
	if(n!=cnt)
	{
		printf("invalid input\n");
		return 0;
	}
	n=n-1;
	for(i=0;str[i];i++)
	{
		if(str[i]=='1')
		{
			num=num+power(2,n);
		}
		n--;
	}
	printf("%d\n",num);
}


