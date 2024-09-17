#include<stdio.h>
int main()
{
	int var1=0x11223344,var2=0;
	char *p;
	int *q;
	float f;
	p=q=&var1;
	var2=*p;
	printf("%x %x\n",var1,var2);
	var2=*q;
	printf("%x %x\n",var1,var2);
	f=*p;
	printf("%f\n",f);
}
