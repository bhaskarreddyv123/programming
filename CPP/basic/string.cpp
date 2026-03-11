#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1;
	fflush(stdin);
	cin>>s2;
	s1=s2;
	cout<<s1<<endl;
	s1=s1+s2;
	cout<<s1<<endl;

	cout<<sizeof(s1)<<endl;
}
