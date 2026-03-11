#include<stdio.h>
int main()
{
	int var1=0x11223344,var2=0;
	char *p;
	int *q;
	float f;
	p=q=&var1;
	var2=*p;
	printf("int var1=%x int var2=char *p-->%x\n",var1,var2);
	var2=*q;
	printf("var1=%x var2=int *q--> %x\n",var1,var2);
	f=*p;
	printf("float f=char *p---> %f\n",f);
	f=*q;
	printf("float f=int *q---> %f\n  ❤️ \n" ,f);
}
