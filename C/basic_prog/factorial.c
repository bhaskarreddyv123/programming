#include<stdio.h>
int factorial(int num)
{
	if(num==0)
		return 1;
	else
		return (num*factorial(num-1));
}

int main()
{
	int num,fact=1;
	scanf("%d",&num);
	/*while(num)
	{
		fact=fact*num;
		num--;
	}*/
	fact=factorial(num);
	printf("%d\n",fact);
}

