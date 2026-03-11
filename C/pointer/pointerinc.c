#include<stdio.h>
int main()
{
	int var=0x11223344;
	char *ptr=(char*)&var;
	printf("%x ",*ptr++); //44
	printf("%x ",++*ptr); //34
	printf("%x ",*++ptr); //22
	printf("%x ",--*ptr); //21
	printf("%x ",*ptr--); //21
        printf("%x ",*ptr);   //34
	printf("%x\n",var);   //11213444
        
}

