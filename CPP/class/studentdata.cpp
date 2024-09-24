#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll;
	char name[20];
	float marks[6];
	float totalmax;
	float per;
	char grade[3];
	public:
	void input()
	{
		cout<<"enter rollno"<<endl;
		cin>>roll;
		cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter marks"<<endl;
	        for(int i=0;i<6;i++)
		{
			cin>>marks[i];
		}
	}
	void total()
	{
		totalmax=0;
		for(int i=0;i<6;i++)
		{
			totalmax=totalmax+marks[i];
		}
	}
	void percentage()
	{
		per=totalmax/6;
	}
	void Grade()
	{
		if(per<40)
		{
			strcpy(grade,"C");
		}
		else if(per>=40 && per<65)
			strcpy(grade,"B");
		else if(per>=65 && per<75)
			strcpy(grade,"B+");
		else if(per>=75 && per<=90)
			strcpy(grade,"A");
		else
			strcpy(grade,"A+");
	
	}

	void print()
	{
		cout<<"roll.no "<<roll<<endl;
		cout<<"name "<<name<<endl;
		cout<<"marks ";
		for(int i=0;i<6;i++)
		{
			cout<<marks[i]<<" ";
		}
		cout<<endl;
		cout<<"total marks "<<totalmax<<endl;
		cout<<"percentage "<<per<<endl;
		cout<<"Grade "<<grade<<endl;
	}

	   	       
};
int main()
{
	class student obj;
	cout<<"size of class is "<<sizeof(obj)<<endl;
	obj.input();
	obj.total();
	obj.percentage();
	obj.Grade();
	obj.print();
}


