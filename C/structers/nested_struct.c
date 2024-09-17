#include<stdio.h>
#include<stdio_ext.h>
struct DOB
{
	int date;
	char mon[5];
	int year;
}dob;
struct employee
{
	int id;
	char name[20];
	struct DOB dob;
	struct branch
	{
		char branch[6];
	}br;
};
int main()
{
	struct employee st;
	printf("enter employee details\n");
	scanf("%d %[^\n]s", &st.id,st.name);
	printf("enter dob details\n");
	scanf("%d",&st.dob.date);
	__fpurge(stdin);
	scanf("%[^\n]s",st.dob.mon);
	scanf("%d",&st.dob.year);
	printf("enter branch details\n");
	__fpurge(stdin);
	scanf("%s",st.br.branch);
	printf("size is %ld\n",sizeof(st));
	printf("%d %s %d %s %d %s\n",st.id,st.name,st.dob.date,st.dob.mon,st.dob.year,st.br.branch);
}

