#include<stdio.h>
union test 
{
	int x;
	int y;
	union test1
	{
		int v;
	}t1;
	union test2
	{
		int a;
	}t2;
};
int main()
{
	union test t;
	t.x=20;
	t.y=30;
	t.t1.v=21;
	printf("size of t=%ld \n",sizeof(t));
	printf("%d %d %d\n",t.x,t.y,t.t1.v);
}
