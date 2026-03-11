
//valgrind --leak-check=full --track-origins=yes ./a.out    ******to know the leaks****


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
	printf("sizeof malloc ptr   %ld\n",sizeof(ptr));
	printf("enter 5 integers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", ptr+i);
	}
	printf("sizeof malloc ptr   %ld\n",sizeof(ptr));
	ptr=(int *)realloc(ptr,9*sizeof(int));    //allocate memeory for 4 more integers
	if(ptr==NULL)
	{
		printf("memory not allocated\n");
		return 0;
	}
	printf("enter 4 more integers\n");
	for(i=5;i<9;i++)
	{
		scanf("%d", ptr+i);
	}

	
	for(i=0;i<9;i++)
	{
		printf("%d ", *(ptr+i));
	}
	free(ptr);
}
