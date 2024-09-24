#include <iostream>
using namespace std;

namespace ABC
{
    int data=10;
    void print()
    {
        cout<<"ABC print"<<endl;
    }
    namespace abc
    {
        struct cal
        {
            int day=1;
            int month=05;
            int year=1999;
        }D;
    };
};

int main()
{
    cout<<ABC::data<<endl;
    cout<<ABC::abc::D.day<<" "<<ABC::abc::D.month<<" "<<ABC::abc::D.year<<endl;

}
