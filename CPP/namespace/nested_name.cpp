#include <iostream>
//using namespace std;

namespace ABC
{
    int data=10;
    void print()
    {
        std::cout<<"ABC print"<<std::endl;
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
using namespace ABC;
int main()
{
	std::cout<<data<<std::endl;
	std::cout<<abc::D.day<<" "<<abc::D.month<<" "<<abc::D.year<<std::endl; 
}

