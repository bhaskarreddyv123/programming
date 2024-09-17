#include<stdio.h>
struct abc
{
	int a;
	char ch;
	int b;
};
int main()
{
	struct abc st;
	st.a=20;
	st.ch=34;
	printf("size is %ld\n",sizeof(st));
	printf("%d %d\n",st.a,st.ch);
}
