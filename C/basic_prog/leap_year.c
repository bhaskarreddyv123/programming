#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)|| year%400==0)
	{
		printf("it is a leap year\n");
	}
	else
		printf("not a leap year\n");
}
