#include <iostream>
using namespace std;
class abc
{
    int a;
    char ch;
    public:
    /*void set()
    {
        cout<<"enter data"<<endl;
        cin>>a>>ch;
    }
    void print()
    {
        cout<<a<<" "<<ch<<endl;
    }*/
    friend void operator>>(istream &,abc &);
    friend void operator<<(ostream&, abc&);
};

void operator>>(istream &in,abc& s)
{
    //cout<<"enter data"<<endl;
    in>>s.a;
    in>>s.ch;
}

void operator<<(ostream &out,abc &s)
{
    out<<"entered data are"<<endl;
    out<<s.a;
    out<<s.ch;
}

int main()
{
    abc obj;
    cin>>obj;        //operator>>(cin,obj)
    cout<<obj;
}
