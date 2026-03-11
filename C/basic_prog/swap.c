#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("before swap a=%d b=%d\n",a,b);
	
	/*a=a+b;
	b=a-b;
	a=a-b;*/

	//a=a*b/(b=a);

	/*a=a^b;
	b=b^a;
	a=a^b;*/

	a^=b^=a^=b;

	printf("after swap a=%d b=%d\n",a,b);
}
