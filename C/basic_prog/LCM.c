#include<stdio.h>
int main()
{
	int n1,n2,lcm;
	scanf("%d %d",&n1,&n2);
	lcm=(n1>n2) ? n1:n2;
	while(1)
	{
		if(lcm%n1==0 && lcm%n2==0)
		{
			printf("%d %d lcm=%d\n",n1,n2,lcm);
		       return 0;
		}
		lcm++;
	}
}
