#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int (*ptr)[5];             //ptr point to an array of 5 integers
	int *p;                   // p can to an integet

	p=arr;                    //p points to 0th element address of array
	ptr=&arr;                  //ptr is pointing to whole array
				  
	printf("p=%p ptr=%p\n",p,ptr);
	printf("*p=%d *ptr=%d\n",*p,**ptr);
	p++;                // moves by sizeof(int) (4 bytes) to arr[1]
	//ptr++;              // moves by sizeof(arr) (5 * 4 = 20 bytes) to past the entire array
	printf("p=%p ptr=%p\n ",p,ptr);
	printf("*p=%d *ptr=%d\n",*p,**ptr);
	printf("second element is *ptr[1]=%d, *(*ptr+1)=%d\n",(*ptr)[1],*(*ptr+1));

}
