#include<stdio.h>
#include<stdlib.h>
int power(int x,int y)
{
	int z=1;
	while(y)
	{
		z=z*x;
		y--;
	}
	return z;
}

int main()
{
	char str[30];
	double f=0;
	int cnt=0,i;
	scanf("%[^\n]s",str);
	printf("atof is %f\n",atof(str));
	i=0;
	if(str[0]=='-'||str[0]=='+')
	{
		i++;
	}
	while(str[i])
	{

		if(str[i]=='.')
		{
			i++;
			break;
		}

		if(str[i]>=48 && str[i]<=57)
		{
			f=f*10+str[i]-48;
		}
		i++;
	}
	while(str[i])
	{
		
                if(str[i]>=48 && str[i]<=57)
                {
			cnt++;
                        f=f*10+str[i]-48;
                }
		i++;
	}
	f=f/power(10,cnt);
	if(str[0]=='-')
		f=-f;
	printf("%f\n",f);
}

