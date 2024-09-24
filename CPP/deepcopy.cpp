#include <iostream>
#include <cstring>
using namespace std;
class abc
{
	char str[20];
	public:
	abc()
	{
		cout<<"constructor"<<endl;
		cin>>str;
	}
	abc(abc &obj)
	{
		strcpy(str,obj.str);
		//str=obj.str;

	}
	void print()
	{
		cout<<str<<endl;
	}
	~abc()
	{
		cout<<"destructor"<<endl;

	}

	abc& operator=(abc& other) 
	{
		cout<<"= operator"<<endl;
		if(this == &other) 
			return *this; // Check for self-assignment

		strcpy(str, other.str); // Copy the data array

		return *this;
	}
};
int main()
{
	abc obj1;
	obj1.print();
	abc obj2=obj1;
	obj2.print();

	abc obj3;
	obj3=obj1;
	obj3.print();

}

