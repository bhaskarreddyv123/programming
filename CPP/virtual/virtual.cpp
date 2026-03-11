#include<iostream>
using namespace std;

class abc
{
	int a;
	public:
	abc()
	{
		cout<<"abc onstructor"<<endl;
	}
	virtual void print()
	{
		cout<<"parent print"<<endl;
	}
	~abc()
	{
		cout<<"abc destructor\n";
	}

};

class child : public abc
{
	public:
		child()
		{
			cout<<"child constructor"<<endl;
		}
		void print()override
		{
			cout<<"child print"<<endl;
		}
		~child()
		{
			cout<<"child destuctor\n";
		}

};

int main()
{
	/*abc *ptr;
	child obj;
	ptr=&obj;
	ptr->print();
	ptr->abc::print();*/

	abc *ptr=new child();
	ptr->print();
	ptr->abc::print();
	delete ptr;
}
