#include<iostream>
using namespace std;

class abc
{
	int a,b;
	public:
	void input();
	void print();
};
void abc::input()
{
	cout<<"enter values"<<endl;
	cin>>a>>b;
}

void abc::print()
{
	cout<<a<<" "<<b<<endl;
}

int main()
{
	abc obj;
	abc *ptr;
	ptr=&obj;
	ptr->input();
	ptr->print();
}
