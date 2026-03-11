#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i, *ptr;
        ptr = (int *) malloc(5*sizeof(int));
        if(ptr==NULL)
        {
                printf("memory not allocated\n");
                return 0;
        }
        printf("enter 5 integers\n");
        for(i=0;i<5;i++)
        {
                scanf("%d", ptr+i);
        }
        for(i=0;i<5;i++)
        {
                printf("%d ", *(ptr+i));
        }
	printf("\n");

	free(ptr);// deallocting the memory 
	//printf("%d",*(ptr+i));
}

