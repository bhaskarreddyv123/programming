#include <iostream>
using namespace std;

class student
{
	int roll;
	string name;
	public:
	student()
	{
		cout<<"student constructor"<<endl;
		cout<<"enter details roll and name"<<endl;
		cin>>roll;
		cin>>name;
	}
	void print()
	{
		cout<<roll<<endl<<name<<endl;
	}
	~student()
	{
		cout<<"student destructor"<<endl;
	}
};
class Branch:public student
{
	string branch;
	public:
	Branch()
	{
		cout<<"Branch constructor"<<endl;
		cout<<"enter branch"<<endl;
		cin>>branch;
	}
	void print()
	{
		
		cout<<branch<<endl;
	}
	~Branch()
	{
		cout<<"Branch destructor"<<endl;
	}
};
int main()
{
	student sobj;
	Branch eobj;
	cout<<"student print"<<endl;
	sobj.print();
	cout<<"eobj print"<<endl;
	eobj.student :: print();
	eobj.print();
	cout<<"......objectslicing......"<<endl;
	sobj=eobj;  // objectslicing happens here
	sobj.print();
 
	/*Branch obj;
	obj.student::print();
	//obj.fprint();          // use disimilar name in parent print
	obj.print();*/

}
