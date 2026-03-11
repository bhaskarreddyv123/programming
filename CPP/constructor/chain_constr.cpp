//calling constructor from another constructor known as chain constructor

#include<iostream>
using namespace std;

class Base
{
	public:
		int x,z;
		Base()
		{
			cout<<"base constructor"<<endl;
			z=70;
			cout<<z<<endl;
		}
		Base(int a):Base() //constructor chaining
		{
			cout<<"base parametrized"<<endl;
			x=a;
			cout<<x<<endl;
		}
};
class derived:public Base
{
	public:
		int y;
		derived():Base(30)
		{
			cout<<"derived constructor"<<endl;
			y=30;
			cout<<y<<endl;
		}
};

int main()
{
	//Base b(20);
	//derived d;
	//
	//
	Base *ptr;
	derived d;
	ptr=&d;      //upcasting

	/*derived *p;
	Base b;
	p=&b;*/        //downcasting not posiible
}
