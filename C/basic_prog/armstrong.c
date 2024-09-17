#include<stdio.h>
int power(int n,int cnt)
{
	int z=1;
	while(cnt)
	{
		z=z*n;
		cnt--;
	}
	return z;
}
int main()
{
	int num,num1,temp,cnt=0,result=0,rem,pow;
	scanf("%d",&num);
	temp=num1=num;
	while(temp)
	{
		cnt++;
		temp=temp/10;
	
	}
	//printf("cnt %d\n",cnt);
	while(num)
	{
		rem=num%10;
		result=result+power(rem,cnt);
		num =num/10;
	}
	if(result==num1)
		printf("armstrong number\n");
	else
		printf("not an armstrong number\n");

}



