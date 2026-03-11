#include<stdio.h>
int main()
{
	int a=10,b=20;
	const int *ptr;	//ptr is a pointer to an integer constant
	
	//int const *ptr1; // ptr is a pointer to constant integer
	
	ptr=&a;
	//*ptr=20; (*ptr)++;        //error    value cannot change

	ptr=&b;  	//ptr can pointing to other locations

	printf("%d %d",a,*ptr);
}

