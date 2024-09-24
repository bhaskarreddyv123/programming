#include<iostream>
using namespace std;
class XYZ; // forwrd declaration
class ABC
{
	int data1,data2;
	public :
	ABC()
	{
		cout<<"enter the data1 and data2:"<<endl;
		cin>>data1>>data2;
	}
	~ABC()
	{
		cout<<"ABC destructor:"<<endl;
	}
	void Print()
	{
		cout<<"data1:"<<data1<<endl;
		cout<<"data2:"<<data2<<endl;
	}
	/**friend void XYZ :: SetData3(ABC &);// invalid because of incomplete type of XYZ as its declaration not yet completed.so solve this make complete class as a friend ***/
	friend class XYZ;
};

class XYZ
{
	int data3;
	public : void SetData3(ABC &obj)
		 {
			data3=obj.data1+obj.data2;
		 }
		 void Print()
		 {
		cout<<"data3:"<<data3<<endl;
		 }
		~XYZ()
		{
		cout<<"XYZ destructor:"<<endl;
		}
		XYZ()
		{
		cout<<"XYZ constructor:"<<endl;
		data3=0;
		}
};

int main()
{
	ABC obj1;
	obj1.Print();
	XYZ xobj;
	xobj.SetData3(obj1);
	xobj.Print();
}

