#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	int *ptr=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
	delete []ptr;
	cout<<ptr[2]<<endl;
}
