#include <iostream>
using namespace std;
int main()
{

	int *ptr;
	//cout<<*ptr<<endl;
	ptr=new int;
	*ptr=20;
	cout<<*ptr<<endl;
	delete ptr;
	cout<<*ptr<<endl;
}
