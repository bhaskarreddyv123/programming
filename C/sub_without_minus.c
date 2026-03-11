#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	while(num2)
	{
		int barrow=(~num1)&num2;
		num1=num1^num2;
		num2=barrow<<1;
	}
	printf("%d\n",num1);
}
