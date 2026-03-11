// 0x1234 0x2143
//
//

#include<stdio.h>
int main()
{
	int num=0x1234;
	int a=num&0x00FF;
	int b=(num&0xFF00 )>> 8;

	printf("%x %x\n",a,b);
	a= (a&0x0F)<<4 | (a&0xF0)>>4;
	b= (b&0x0F)<<4 | (b&0xF0)>>4;
	printf("%x %x\n",a,b);

	num = a|(b<<8);
	printf("%x\n",num);
}
