#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"enter no.of rows"<<endl;
	cin>>r;
	cout<<"enter no.of columns"<<endl;
	cin>>c;
	int **ptr=new int *[r];
	for(int i=0;i<r;i++)
	{
		ptr[i]=new int[c];
		for(int j=0;j<c;j++)
		{
			cin>>ptr[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<ptr[1][1]<<endl;
	for (int i = 0; i < r; ++i) {
		delete[] ptr[i]; // Delete each row
	}
	//delete []ptr;
	cout<<ptr[1][1]<<endl;

}


