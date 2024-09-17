#include<stdio.h>
#include<stdio_ext.h>
struct employee 
{
	int id;
	char name[20];
	float salary;
};
int main()
{
	struct employee st;
	printf("enter id\n");
	scanf("%d",&st.id);
	printf("enter name\n");
	__fpurge(stdin);
	scanf("%[^\n]s",st.name);
	printf("enter salary\n");
	scanf("%f",&st.salary);
	printf("%d %s %f\n",st.id,st.name,st.salary);
}
