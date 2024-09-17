#include<stdio.h>
int main()
{
	int num,temp,sum=0;
	printf("enter number\n");
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		sum=sum*10+num%10;
		num=num/10;
	}
	if(sum==temp)
		printf("palindrome number\n");
	else
		printf("not a palindrome number\n");
}
