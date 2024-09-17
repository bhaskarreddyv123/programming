#include<stdio.h>
int main()
{
	union st
	{
		int a;
		int b;
		float d;
	};
	union st c;
	c.b=52;
	c.d=10.23;
	c.a=20;
	printf("%d %d %f \n",c.b,c.a,c.d);
}
