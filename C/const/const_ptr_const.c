//const ptr to const integer 
//


#include<stdio.h>
int main()
{
	int a=10,b=23;
	const int *const ptr=&a; //ptr is a constant pointer to an integer constant
	
//      int const *const ptr;    //same as above one
	//*ptr=20;         //error not to change value
	 
	// ++*ptr;            //error
	
	// ptr=&b;           //error not to assign variable after declaration 
	printf("%d %d",a,*ptr);
}
