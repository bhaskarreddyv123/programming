#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	fclose(fp);
	fp=fopen(argv[1],"r");
	int Ccnt=0,Wcnt=0,Lcnt=0;
	fseek(fp,0,SEEK_END);
	Ccnt=ftell(fp);
	rewind(fp);
	char str[80],*buf;
	buf=(char*)malloc(Ccnt+1);
	printf(".........bbbb>>\n");
	/*fread(str,sizeof(char),Ccnt,fp);
	for(int i=0;i<Ccnt;i++)
	{
		if(buf[i]==' '||buf[i]=='\n')
		{
			Wcnt++;
			if(buf[i]=='\n')
				Lcnt++;
		}
		Lcnt++;
	}*/
	while(fscanf(fp,"%s",str)==1)
	{
		Wcnt++;
		//printf("%s ",str);
	}
	rewind(fp);
	while(fgets(str,80,fp))
	{
		//printf("%s",str);
		Lcnt++;
	}
	fclose(fp);

	printf("charcnt=%d\nwordcnt=%d\nlinecnt=%d\n",Ccnt,Wcnt,Lcnt);
}
