#include <stdio.h>
#include <string.h>

void remove_extra_space(char *ptr)
{
	for(int i=0;ptr[i];i++)
	{
		if(ptr[i]==' ')
		{
			if(ptr[i+1]==' ')
			{
				memmove(&ptr[i],&ptr[i]+1,strlen(&ptr[i]+1)+1);
				i--;
			}

		}
	}
	if(ptr[0]==' ')
	{
		memmove(&ptr[0],&ptr[0]+1,strlen(&ptr[0]+1)+1);
	}
	

	/*while(*ptr!='\0')
	{
		if(*ptr==' ')
		{
			if(*(ptr+1)==' ')
			{
				memmove(ptr,ptr+1,strlen(ptr+1)+1);
				ptr--;
			}	
		}
		ptr++;
	}*/

	printf("%s\n",ptr);
}
int main()
{
	char str[50];
	printf("enter the string\n");
	scanf("%[^\n]s",str);
	remove_extra_space(str);
	printf("%s\n",str);
}
