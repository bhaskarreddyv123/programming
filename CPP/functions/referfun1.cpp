#include <iostream>
using namespace std;
void add(int &a,int &b)
{
	int z;
	a=a+b;
	//return z;
}
int main()
{
	int a=20,b=30;
	//int res=add(a,b);
	add(a,b);
	cout<<a<<endl;
}
