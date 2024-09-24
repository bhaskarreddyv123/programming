#include<iostream>
using namespace std;
template<class any>

void myswap(any &a,any &b)
{
    any temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    myswap(a,b);
    cout<<"after swap"<<endl<<a<<" "<<b<<endl;

    char ch='a',ch1='b';
    cout<<ch<<" "<<ch1<<endl;
    myswap(ch,ch1);
    cout<<"after swap"<<endl<<ch<<" "<<ch1<<endl;
    
}
