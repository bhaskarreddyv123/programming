//pipe 1 write data in parent and read in child and convert it and write into pipe2 and read the pipe 2 by parent and display
//


#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int p1[2],p2[2],i;
	pipe(p1);
	perror("pipe1");
	pipe(p2);
	perror("pipe2");
	if(fork()==0)
	{
		char s[30];
		printf("in child\n");
		read(p1[0],s,sizeof(s));
		for(i=0;s[i];i++)
		{
			if(s[i]>='a' && s[i]<='z')
				s[i]=s[i]-32;
		}
		write(p2[1],s,strlen(s)+1);
	}
	else
	{
		char a[30];
		printf("in parent\n");
		printf("enter strinf\n");
		scanf("%[^\n]s",a);
		write(p1[1],a,strlen(a)+1);
		printf("reading parent of pipe2\n");
		read(p2[0],a,sizeof(a));
		printf("displaying string\n");
		printf("%s\n",a);
	}
}

