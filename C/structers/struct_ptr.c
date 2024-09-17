#include<stdio.h>
#include<stdio_ext.h>
struct emp
{
	int id;
	char name[30];
};
int main()
{
	struct emp st,*ptr;
	ptr=&st;
	scanf("%d",&ptr->id);
	__fpurge(stdin);
	scanf("%[^\n]s",ptr->name);
	printf("size is ptr=%ld st=%ld\n",sizeof(ptr),sizeof(st));
	printf("%d %s\n",ptr->id,ptr->name);
}
