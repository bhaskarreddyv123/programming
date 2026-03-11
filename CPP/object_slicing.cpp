#include <iostream>
using namespace std;

class Base 
{
	public:
		int baseVar;
		virtual void display() 
		{
			cout << "Base class variable: " << baseVar << endl;
		}
};

class Derived : public Base 
{
	public:
		int derivedVar;
		void display() 
		{
			cout << "Base class variable: " << baseVar << ", Derived class variable: " << derivedVar << endl;
		}
};

int main() {
	Derived d;
    d.baseVar = 10;
    d.derivedVar = 20;
    d.display();

    Base b = d;  // Object slicing happens here
    // Base &b = d;  // To avoid slicing 

    b.display();  // Calls Base::display(), derivedVar is "sliced off"
    return 0;
}

