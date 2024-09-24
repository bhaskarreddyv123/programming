#include<iostream>
using namespace std;

class ABC
{
	int data1,data2;
	public : 
	ABC() // default cons
	{
		cout<<"default cons:"<<endl;
		cout<<"enter the data1 and data2:"<<endl;
		cin>>data1>>data2;
	}
	ABC(int a,int b)
	{
		cout<<"Parameterised cons:"<<endl;
		data1=a;
		data2=b;
	}
	ABC(ABC &obj)
	{
		cout<<"Copy cons:"<<endl;
		data1=obj.data1;
		data2=obj.data2;
	}
	void Print()
	{
		cout<<"data1:"<<data1<<" ";
		cout<<"data2:"<<data2<<endl;
	}
	~ABC()
	{
		cout<<"ABC destructor"<<endl;
	}
};

int main()
{
	ABC obj1;  // obj1.ABC()
	ABC obj2(3,4);  // obj2.ABC(3,4)
	ABC obj3=obj1; // obj3.ABC(obj1)
	obj1.Print();
	obj2.Print();
	obj3.Print();
}

