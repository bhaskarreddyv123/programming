#include<iostream>
//#include<typeinfo>
using namespace std;
bool fun(int a,int b)
{
	cout<<a<<"  "<<b<<endl;
	if(a>b)
		return true;
	else
		return false;
}
int main()
{
	int a=20,b=30;
	bool n;
	n=fun(a,b);
	cout<<n<<" type is "<<typeid(n).name()<<endl;
	cout<<"a is "<<typeid(a).name()<<endl;
}
