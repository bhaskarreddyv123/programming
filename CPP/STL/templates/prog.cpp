#include <iostream>
using namespace std;
template<class T>
T sum(T a, T b)
{
	cout<<"typeid(T) "<<typeid(T).name()<<endl;
	return (a+b);

}

template<class T>
class ARRAY
{
	T a[5];
	public:
	void set()
	{
		cout<<"enter"<<typeid(a).name()<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}
	void get()
	{
		for(int i=0;i<5;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	ARRAY<int>obj1;
	obj1.set();
	obj1.get();

	ARRAY<float>obj2;
	obj2.set();
	obj2.get();

	int result=sum(10,20);
	cout<<"result "<<result<<endl;
	float out=sum(20,20);
	cout<<"result "<<out<<endl;
}

