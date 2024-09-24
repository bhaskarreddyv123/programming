#include<iostream>
using namespace std;

template<class type1,class type2>
class ABC
{
	type1 a;
	type2 b;
	public : ABC();
		 void Print();
		 ~ABC();
};

template<class type1,class type2>
ABC<type1,type2>::ABC()
{
	cout<<"enter the a and b:"<<endl;
	cin>>a>>b;
}
template<class type1, class type2>
ABC<type1,type2>::~ABC()
{
	cout<<"ABC Destructor:"<<endl;
}

template<class type1, class type2>
void ABC<type1,type2>::Print()
{
	cout<<a<<" "<<b<<endl;
}

int main()
{
	ABC<int,string>obj1;
	ABC<double,char>obj2;

	obj1.Print();
	obj2.Print();
}
