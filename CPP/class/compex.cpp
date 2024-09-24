#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
	void input();
	void print();
	Complex &add(Complex &);
};
void Complex::input()
{
	cout<<"enter real num"<<endl;
	cin>>real;
	cout<<"enter img num"<<endl;
	cin>>img;
}

void Complex::print()
{
	cout<<real;
	if(img>0)
		cout<<"+";
	cout<<img<<"i"<<endl;
}
Complex & Complex::add(Complex &e)
{
	static Complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;
}

int main()
{
	Complex e1,e2,e3,e4;
	e1.input();
	e2.input();
	e3=e1.add(e2);
	e1.print();
	e2.print();
	e3.print();
}
