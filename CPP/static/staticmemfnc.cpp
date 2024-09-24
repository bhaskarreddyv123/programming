#include<iostream>
using namespace std;

class Student
{
	int roll;
	char name[20];
	float percentage;
	static int cnt;
	public : Student()
		 {
			 cnt++;
			 roll=cnt;
			 cout<<"enter the name:"<<endl;
			 cin>>name;
			 cout<<"enter the perentage:"<<endl;
			 cin>>percentage;
		 }
		 void Print()
		 {
			 cout<<"roll"<<roll<<endl;
			 cout<<"name:"<<name<<endl;
			 cout<<"percentage:"<<percentage<<endl;
		 }
		 /** static member func **/
		 static void PrintCnt()
		 {
			 cout<<cnt<<endl;

		 }
};
void f1();
int Student :: cnt;
int main()
{
	Student S1;
	S1.Print();
	f1();
	//Student :: PrintCnt();
	S1.PrintCnt();
}

void f1()
{
	Student a[2];
	for(int i=0;i<2;i++)
		a[i].Print();
}


