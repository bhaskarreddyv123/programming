// in this pointer to initialize at declaration time only if not it will not point location

#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *const ptr=&a;  //ptr is a constant pointer to an integer

	//ptr=&a;      //error
        *ptr=20;           //     value can change and incremented 

	(*ptr)++;
	//ptr++;	//error

//	ptr=&b;     //error not point to aother location

	printf("%d %d\n",a,*ptr);
}
