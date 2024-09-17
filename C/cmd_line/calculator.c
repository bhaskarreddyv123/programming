#include<stdio.h>
int main(int argc,char **argv)
{
	int num1=0,num2=0,res,ch,i=0;

	while(argv[1][i])
	{
		if(argv[1][i]>=48 && argv[1][i]<=57)
		{
			num1=num1*10+(argv[1][i]-48);
		}
		else
		{
			printf("argv[1] is not a number\n");
			return 0;
		}
		i++;
	}
	printf("num1=%d\n",num1);
	i=0;
	while(argv[2][i])
	{
		if(argv[2][i]>=48 && argv[2][i]<=57)
		{
			num2=num2*10+(argv[2][i]-48);
		}
		else
		{
			printf("argv[2] is not a number\n");
			return 0;
		}
		i++;
	}
	printf("num2=%d\n",num2);

	ch=argv[3][0]-48;

	switch(ch)
	{
		case 1:printf("ADDITION\n");
		       res=num1+num2;
		       printf("res =%d\n",res);
		       break;
		case 2:printf("SUBTRACTION\n");
		       res=num1-num2;
		       printf("res =%d\n",res);
		       break;
		case 3:printf("MULTIPLICATION\n");
		       res=num1*num2;
		       printf("res =%d\n",res);
		       break;
	}
}

