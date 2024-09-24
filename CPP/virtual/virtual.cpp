#include<iostream>
using namespace std;

class abc
{
    int a;
    public:
    abc()
    {
        cout<<"constructor"<<endl;
    }
    virtual void print()
    {
        cout<<"parent"<<endl;
    }

};

class child : public abc
{
    public:
    void print()
    {
        cout<<"child"<<endl;
    }

};

int main()
{
    abc *ptr;
    child obj;
    ptr=&obj;
    ptr->print();
}
