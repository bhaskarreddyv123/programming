/*while using virtual ambiguity error is gone bcz then compiler shows like only one class A like class A,B,C,B 
 * without virutal compiler thinks like class B-->A, class C-->A , then copiler confues from which one want to take
 */

#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"class A constructor"<<endl;
		}
		void printA()
		{
			cout<<"class A Bhaskar"<<endl;
		}
		~A()
		{
			cout<<"class A destructor"<<endl;
		}
};
class B:virtual public A
{
	public:
		B()
		{
			cout<<"class B Constructor"<<endl;
		}
		void printB()
                {
                        cout<<"class B Bhaskar"<<endl;
                }
                ~B()
                {
                        cout<<"class B destructor"<<endl;
                }
};
class C:virtual public A
{
	 public:
                C()
                {
                        cout<<"class C Constructor"<<endl;
                }
                void printC()
                {
                        cout<<"class C Bhaskar"<<endl;
                }
                ~C()
                {
                        cout<<"class C destructor"<<endl;
                }
};
class D:public B,public C
{
	 public:
                D()
                {
                        cout<<"class D Constructor"<<endl;
                }
                void printD()
                {
                        cout<<"class D Bhaskar"<<endl;
                }
                ~D()
                {
                        cout<<"class D destructor"<<endl;
                }
};
int main()
{
	D obj;
	obj.printC();
	obj.printA();
}
