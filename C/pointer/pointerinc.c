#include<stdio.h>
int main()
{
	int var=0x11223344;
	char *ptr=(char*)&var;
	printf("%x ",*ptr++);
	printf("%x ",++*ptr);
	printf("%x ",*++ptr);
	printf("%x ",--*ptr);
	printf("%x ",*ptr--);
	printf("%x\n",var);

}

