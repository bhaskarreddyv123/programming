#include <iostream>
using namespace std;
class parent
{
	int a,b;
	public:
	parent()
	{
		cin>>a>>b;
		cout<<"parent constructor"<<endl;
	}
	void sum()
	{
		a=a+b;
		cout<<"sum= "<<a<<endl;
	}
	~parent()
	{
		cout<<"parent destructor"<<endl;
	}
};

class child :private parent
{
	public:
	child()
	{
		cout<<"child constructor"<<endl;
	}
	void print()
	{
		parent::sum();
	}
	~child()
	{
		cout<<"child destructor"<<endl;
	}
};

int main()
{
	child obj;
	obj.print();
}
