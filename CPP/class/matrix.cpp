#include<iostream>
using namespace std;

class matrix
{
	int a[2][2];
	public:
	void input();
	void print();
	matrix &add(matrix &);
	matrix &sub(matrix &);
	matrix &mul(matrix &);
};
void matrix::input()
{
	cout<<"enter matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
}

void matrix::print()
{
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;

	}
}

matrix &matrix::add(matrix &M)
{
	static matrix temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			temp.a[i][j]=a[i][j]+M.a[i][j];
		}
	}
	return temp;
}

matrix &matrix::sub(matrix &M)
{
	static matrix temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			temp.a[i][j]=a[i][j]-M.a[i][j];
		}
	}
	return temp;
}

matrix &matrix::mul(matrix &M)
{
	static matrix temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				temp.a[i][j]+=a[i][k]*M.a[k][j];
			}
		}
	}
	return temp;
}	
int main()
{
	matrix M1,M2,M3,M4,M5;
	M1.input();
	M2.input();
	M3=M1.add(M2);
	M4=M1.sub(M2);
	M5=M1.mul(M2);
	cout<<"1st matrix"<<endl;
	M1.print();
	cout<<"2nd matrix"<<endl;
	M2.print();
	cout<<"add matrix"<<endl;
	M3.print();
	cout<<"sub matrix"<<endl;
	M4.print();
	cout<<"mul matrix"<<endl;
	M5.print();
}


