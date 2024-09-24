#include <iostream>
using namespace std;
int add(int ,int ,int =0,int =0,int =5);
int main()
{
	int a,b,c,d;
	a=add(20,30);
	b=add(20,30,40);
	c=add(20,30,40,20);
	d=add(1,2,3,4);
	cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl<<"d= "<<d<<endl;
}
int add(int a,int b,int c,int d,int e)
{
	return (a+b+c+d+e);
}
