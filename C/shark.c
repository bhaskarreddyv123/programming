#include<stdio.h>
int productdig(int num)
{
	int prod=1,flag=0;
	if(num<0)
	{
		num=-num;
		flag=1;
	}
	while(num)
	{
		prod=prod*num%10;
		num=num/10;
	}
	if(flag==1)
	{
		prod=-prod;
	}
	return prod;
}
int factorial(int num)
{
	int fact=1;
	if(num<0)
	{
		num=-num;
	}
	while(num)
	{
		fact=fact*num;
		num--;
	}
	return fact;
}

int main()
{
	int num,product,neg,fact,ch;
	scanf("%d",&num);
	while(1)
	{
		printf("1.product 2.negative 3.factorial 4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:product=productdig(num);
			       printf("product =%d\n",product);
			       break;
			case 2:if(product<0)
				       printf("negative product\n");
			       else
				       printf("positive product\n");
			       break;
			case 3:fact=factorial(num);
			      printf("%d\n",fact);
			      break;
			case 4: return 0;
		}
	}
}	

