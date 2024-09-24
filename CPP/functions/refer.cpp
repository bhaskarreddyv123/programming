#include<iostream>
using namespace std;
int main()
{
	int a=20;
	int &b=a;
	int &c=a;
        cout<<a<<" address is "<<&a<<endl;
	cout<<b<<" address is "<<&b<<endl;
        cout<<c<<" address is "<<&c<<endl;
}

