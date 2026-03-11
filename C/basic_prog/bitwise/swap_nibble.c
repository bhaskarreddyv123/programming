/* 0x12345678 to 0x87654321 */

#include<stdio.h>
int main()
{
	int num=0x12345678;
	int a=0,b,c,d,e,f,g,h;
	//printf("enter hexa number\n");
	//scanf("%x",&num);
	
/***	a=num&0xff;                          //0x1234 to 0x2143
	b=(num>>8)&0xff;
	a=((a&0x0f)<<4) | ((a&0xf0)>>4);
	b=((b&0x0f)<<4) | ((b&0xf0)>>4);
	num= (b<<8)|a;
	printf("%x\n",num);    ***/     
	

  /*    a=num>>28 &0x0f;
	b=num>>24 &0x0f;
	c=num>>20 &0x0f;
	d=num>>16 &0x0f;
	e=num>>12 &0x0f;
	f=num>>8 &0x0f;
	g=num>>4 &0x0f;
	h=num&0xf;
	printf("%x %x %x %x %x %x %x %x\n",h,g,f,e,d,c,b,a);
	num=h<<28 | g<<24 | f<<20 | e<<16 | d<<12 | c<<8 | b<<4 | a; 
	printf("%x\n",num);        */


	num=((num&0x0000000F)<<28) | ((num&0x000000F0)<<20) | ((num&0x00000F00)<<12) | ((num&0x0000F000)<<4) |
		((num&0x000F0000)>>4) | ((num&0x00F00000)>>12) | ((num&0x0F000000)>>20) | ((num&0xF0000000)>>28) ;
	printf("%x\n",num);   


	for(int i=0;i<8;i++)
	{
		a |=(num&0x0F)<<(28 - i*4);
		num=num>>4;
	}
	printf("%x\n",a);                          


}
