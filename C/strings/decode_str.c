//3[ab] -> ababab
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *no_of_times(char *ptr,int num)
{
	static char result[100];
	result[0]='\0';
	if(num==0 || num==1)
	{
		return ptr;
	}
	else
	{
		while(num>0)
		{
			strcat(result,ptr);
			num--;
		}
		return result;
	}
}

int main()
{
	int num=0,i=0,j=0;
	char str[30],*ptr=NULL,decodestr[100],str1[30]; 
	printf("enter string\n");
	scanf("%[^\n]s",str);

	while(str[i])
	{
		if(str[i]>=48 && str[i]<=57)
		{
			num=num*10+str[i]-48;
		}
		else if(str[i]=='[')
		{
			i++;
			j=0;
			while(str[i]!=']' && str[i]!='\0')
			{
				//printf("str[%d] %c \n",i,str[i]);
				str1[j]=str[i];
				i++;
				j++;
			}
			str1[j]='\0';
			//printf("str1 %s\n",str1);
			ptr=no_of_times(str1,num);
			num=0;
			strcat(decodestr,ptr);
			
		}
		//printf("str[%d] %c \n",i,str[i]);
		i++;
	}
	printf("%s\n",decodestr);
}
