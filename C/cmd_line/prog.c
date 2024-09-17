#include <stdio.h>

int main(int argc,char *argv[])
{
	printf("argc =%d\n",argc);

	printf("%d %s\n",argv[1][0],argv[1]);
	printf("%d %s\n",argv[2][0],argv[2]);
}

