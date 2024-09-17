#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	char name[10];
}STU;

int main()
{
	STU *ptr=NULL;
	int i;
	printf("%ld\n",sizeof(STU));
	ptr=(STU *)calloc(2,sizeof(STU));
	if(ptr==NULL)
	{
		printf("memory not created\n");
		return 0;
	}
	for(i=0;i<2;i++)
	{
		scanf("%d",&ptr[i].roll);
		scanf("%s",&ptr[i].name);
	}
	for(i=0;i<2;i++)
	{

		printf("%d %s\n",ptr[i].roll,ptr[i].name);
	}
	free(ptr);
}

