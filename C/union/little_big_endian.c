#include<stdio.h>
union endian
{
	int a;
	char ch;
};
int main()
{
	union endian obj;
	obj.a=0x12345678;
	printf("%x %x\n",obj.a,obj.ch);
	if(obj.ch==0x78)
	{
		printf("litle endian\n");
	}
	else
		printf("big endian\n");
}

