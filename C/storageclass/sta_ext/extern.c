#include<stdio.h>
//#include "ext.c"
int main()
{
	extern int a;
	printf("%d",a);
	func();
}
int a=20;
