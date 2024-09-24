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
class Branch
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
class sport:public student , public Branch
{
	string sportname;
	public:
	sport()
	{
                cout<<"sport constructor"<<endl;
                cout<<"enter sport"<<endl;
                cin>>sportname;
        }
        void print()
        {
		student::print();
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
	obj.print();
}
