#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v)
{
	for(int i=0;i!=v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void printrev(vector<int>&v)
{
	for(auto p=v.rbegin();p!=v.rend();p++)
	{
		cout<<*p<<" ";
	}
	cout<<endl;
}
int main()
{
	int ele,n;
	vector<int>v;
	cin>>n;
	for(int i=0;i<8;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	cout<<"size of vector is "<<v.size()<<endl;
	/*for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
	cout<<endl;*/
	print(v);
	printrev(v);
	vector<int>::iterator p;
	p=v.begin();
	cout<<"inserting element ar pos 2"<<endl;
	if(v.size()>=2)
	{
	v.insert(p+2,15);
	}
	print(v);
	cout<<"earsing element ar pos 4"<<endl;
	if(v.size()>=4)
	{
	v.erase(p+4);
	}
	print(v);
	cout<<"size "<<v.size()<<endl;
	cout<<"capacity "<<v.capacity()<<endl;
	cout<<"maximun size "<<v.max_size()<<endl;
	cout<<"reference a varialbe at position using at(2) "<<v.at(2)<<endl;
	cout<<"front element "<<v.front()<<endl;
	/*v.assign(1,30);
	cout<<"size "<<v.size()<<endl;
	print(v);*/

	sort(v.begin(),v.end());
	cout<<"sorting in ascending order"<<endl;
	print(v);
	sort(v.begin(),v.end(),greater<int>());
	cout<<"sorting in descending order"<<endl;
	print(v);

	cout<<"revese the string"<<endl;
	printrev(v);


}
