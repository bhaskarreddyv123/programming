#include<stdio.h>
int main()
{
	int num,temp=0,i,n;
	char str[12];
	scanf("%d",&num);
	while(num)
	{
		temp=temp*10+num%10;
		num=num/10;
	}
	i=0;
	while(temp)
	{
		str[i]=(temp%10)+48;
		temp=temp/10;
		i++;
	}
	str[i]='\0';
	printf("%s\n",str);
}
