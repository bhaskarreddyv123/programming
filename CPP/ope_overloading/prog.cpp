#include<iostream>
using namespace std;

class ABC
{
	int a,b;
	public:
	ABC()
	{
		a=0;
		b=0;
	}
	ABC(int x,int y)
	{
		a=x;
		b=y;
	}
	~ABC()
	{
		cout<<"destructor"<<endl;
	}
	void print();
	ABC operator+(ABC&);
	ABC operator-(ABC&);
	ABC& operator++();
	ABC operator++(int);
	ABC& operator--();
	ABC operator--(int);
};

ABC ABC::operator+(ABC &e)
{
	/*static ABC temp;
	temp.a=a+e.a;
	temp.b=b+e.b;
	return temp;*/
	return ABC(a+e.a,b+e.b);
}

ABC ABC::operator-(ABC &e)
{
	static ABC temp;
	temp.a=a-e.a;
	temp.b=b-e.b;
	return temp;
	//return ABC(a-e.a,b-e.b);

}

ABC& ABC::operator++()
{
	a++;
	b++;
	return *this;
}
ABC ABC:: operator++(int)
{
	ABC temp=*this;
	a++;
	b++;
	return temp;
}
ABC& ABC::operator--()
{
	a--;
	b--;
	return *this;
}
ABC ABC::operator--(int)
{
	ABC temp=*this;
	a--;
	b--;
	return temp;
}

void ABC::print()
{
	cout<<"a="<<a<<" b="<<b<<endl;
}

int main()
{
	ABC obj1(10,20);
	ABC obj2(5,15);
	ABC sum,sub,postinc,postdec;
	sum=obj1+obj2;
	sub=obj1-obj2;
	/*++obj1;
	postinc=obj2++;
	--obj1;
	postdec=obj2--;*/
	cout<<"obj1 values"<<endl;
	obj1.print();
	
	cout<<"obj2 values"<<endl;
	obj2.print();
	
	cout<<"sum"<<endl;
	sum.print();
	
	cout<<"sub"<<endl;
	sub.print();
	
	cout<<"preincment"<<endl;
	++obj1;
	obj1.print();
	
	cout<<"post increment"<<endl;
	postinc=obj2++;
	postinc.print();
	obj2.print();
	
	cout<<"pre decrement"<<endl;
	--obj1;
	obj1.print();
	
	cout<<"post decrement"<<endl;
	postdec=obj2--;
	postdec.print();
	obj2.print();
}


