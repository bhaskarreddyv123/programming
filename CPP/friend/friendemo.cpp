#include<iostream>
using namespace std;
class ABC
{
	int data1,data2;
	public : 
	ABC()
	{
		cout<<"enter the data1 and data2:"<<endl;
		cin>>data1>>data2;
	}
	void Print()
	{
		cout<<"data1:"<<data1<<endl;
		cout<<"data2:"<<data2<<endl;
	}
	friend void sum(ABC &);// sum is friend to ABC class
};
void sum(ABC & obj)
{
	cout<<obj.data1+obj.data2<<endl;
}

int main()
{
	ABC obj1;
	obj1.Print();
	sum(obj1);

}

