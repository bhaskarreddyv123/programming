#include<stdio.h>
#include<string.h>

int main()
{
	char str[30],ch;
	int bit,index;
	scanf("%s",str);
	printf("enter index\n");
	scanf("%d",&index);
	printf("enter bit\n");
	scanf("%d",&bit);
	printf("%s\n",str);

	/*ch=str[index];
	printf("%c is %d\n",ch,ch);
	ch=ch|(1<<bit);
	str[index]=ch;
	printf("%c is %d\n",ch,ch);*/

	str[index]|=1<<bit;
	printf("%s\n",str);
}

