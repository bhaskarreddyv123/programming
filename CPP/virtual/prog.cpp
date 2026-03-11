#include <iostream>
using namespace std;
class base
{
	public:
		virtual void design()=0; //pure virtual
		void start()
		{
			cout<<"start fun in base "<<endl;
			//run();
		}
		virtual void run()       //if virtual is not keep then it executes in base class run fun otherwise it executes in derived fun
		{
			cout<<"run fun in base "<<endl;
		}
};

class derived:public base
{
	public:
		void design()
		{
			cout<<"design fun in derived"<<endl;
		}
		void run()
		{
			cout<<"run fun in derived"<<endl;
		}
};

int main()
{
	base *ptr;
	derived d;
	ptr=&d;
	ptr->design();
	ptr->start();
	ptr->run();
	d.start();
	//d.design();
}
