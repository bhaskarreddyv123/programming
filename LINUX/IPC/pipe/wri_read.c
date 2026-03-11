//writing by parent and printing by child

#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int p[2];
	pipe(p);
	perror("pipe");
	printf("p[0]=%d\np[1]=%d\n",p[0],p[1]);
	if(fork()==0)
	{
		char s[30];
		printf("in child before read\n");
		read(p[0],s,sizeof(s));
		printf("%s\n",s);
	}
	else
	{
		char a[20];
		printf("enter string\n");
		scanf("%[^\n]s",a);
		write(p[1],a,strlen(a)+1);
	}
}
