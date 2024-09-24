#include<iostream>
using namespace std;
int add(int a,int b)
{
	return (a+b);
}
int add(float a,int b)
{
	return (a-b);
}
int main()
{
	int a,b;
	float c;
	cin>>a>>b>>c;
	float sum,sub;
	sum=add(a,b);
	cout<<"sum "<<sum<<endl;
	sub=add(c,b);
	cout<<"sub "<<sub<<endl;
}

