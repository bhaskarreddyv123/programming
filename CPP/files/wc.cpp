#include<iostream>
#include<fstream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream file(argv[1]);
    int Ccnt=0,Wcnt=0,Lcnt=0;

    file.seekg(0,ios::end);
    Ccnt=file.tellg();
    file.seekg(0,ios::beg);
    char *buf;
    buf=new char[Ccnt];

    file.read(buf,Ccnt);
    /*char *p=buf;

    while(p=strchr(p,32))
    {
        Wcnt++;
        p++;
    } 
    p=buf;
    while(p=strchr(p,10))
    {
        Lcnt++;
        p++;
    }*/
    
    for(int i=0;buf[i];i++)
    {
        if(buf[i]==' '||buf[i]=='\n')
        {
            Wcnt++;
            if(buf[i]=='\n')
            {
                Lcnt++;
            }
        }
    }
    Lcnt++;
    delete []buf;

    file.close();

    cout<<"char count="<<Ccnt<<endl<<"word count"<<Wcnt<<endl<<"line count"<<Lcnt<<endl;

}
