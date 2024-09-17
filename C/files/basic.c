#include<stdio.h>
int main()
{
	FILE *fp;
	printf("vector\n");
	fp=fopen("test.txt","r");
	printf("%c\n",fgetc(fp));
	printf("%d\n",ftell(fp));
	printf("%c\n",fgetc(fp));
	fseek(fp,1,1); //SEEK_CUR
	printf("%c \n",fgetc(fp));
	fseek(fp,-3,2); //SEEK_END
	printf("%c\n",fgetc(fp));
	printf("%d\n",ftell(fp));
	fseek(fp,0,0); //SEEK_BEGI
	printf("%c\n",fgetc(fp));
	fseek(fp,2,1);
	printf("%c\n",fgetc(fp));
	rewind(fp); //beginning
	printf("%c\n",fgetc(fp));
}
