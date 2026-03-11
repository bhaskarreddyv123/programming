#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int length=6,arr[length],otp;
	srand(time(NULL));
	
	
	/*for(int i=0;i<length;i++)
	{
		//arr[i]=rand()%10;
		printf("%d",rand()%10);
	}*/
	
	
	/*for(int i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}*/
	
	
	otp=rand()%899999 + 100000;
	printf("%d",otp);
	printf("\n");
}


