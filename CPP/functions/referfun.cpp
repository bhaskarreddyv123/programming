#include<iostream>
using namespace std;
void fun(int &a,int b)
{
	a++;
	b++;
}
int main()
{
	int a=20,b=30;
	cout<<a<<" "<<b<<endl;
	fun(a,b);
	cout<<a<<" "<<b<<endl;
}

