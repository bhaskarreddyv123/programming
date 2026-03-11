/*#include<stdio.h>
void fun(int x,int y,int z)
{
	printf("%d %d %d \n",x,y,z);
}
int main()
{
	int a=10;
	fun(a,a++,++a);
	printf("%d\n",a);
}*/


#include<stdio.h>
void fun(int x,int y,int z,int v,int a,int b)
{
        printf("%d %d %d %d %d %d\n",x,y,z,v,a,b);
}
int main()
{
        int a=10;
        fun(a++,a,++a,a,a++,++a);
        printf("%d\n",a);
}
