#include <iostream>
using namespace std;

class student
{
	int roll;
	char name[20];
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
		cout<<"sizeof student "<<sizeof(student)<<endl;
		cout<<roll<<endl<<name<<endl;
	}
	~student()
	{
		cout<<"student destructor"<<endl;
	}
};
class Branch:public student
{
	char branch[4];
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
class sport:public Branch
{
	char sportname[10];
	public:
	sport()
	{
                cout<<"sport constructor"<<endl;
                cout<<"enter sport"<<endl;
                cin>>sportname;
        }
        void print()
        {
		Branch::student::print();
		Branch::print();
                cout<<sportname<<endl;
        }
        ~sport()
        {
                cout<<"sport destructor"<<endl;
        }

};	
int main()
{
	sport obj;
	cout<<"size  "<<sizeof(obj)<<endl;
	obj.print();
	cout<<"size  "<<sizeof(obj)<<endl;
}
