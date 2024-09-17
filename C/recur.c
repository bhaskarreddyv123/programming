#include<stdio.h>
void solve(int x)
{
	if(x==0)
	{
		printf("%d ",x);
		return;

	}
	printf("%d ",x);
	solve(x-1);
	printf("%d ",x);
}
int main()
{
	solve(3);
}
