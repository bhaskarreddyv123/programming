#include<stdio.h>
int main()
{
	//int ch=12;
    //int *ptr=&ch;
    int *ptr=NULL;
    printf("ptr is NULL\n");
    printf("ptr address is %ld\n",ptr);
    printf("%d\n",*ptr);               //segmentation fault because for ptr doesn't assign anyhting
    ptr++;
    printf("ptr address is %ld\n",ptr);
    printf("%d\n",*ptr);
    printf("ptr is not printing\n");
    
}
