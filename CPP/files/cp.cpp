#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    ifstream src(argv[1]);
    ofstream dest(argv[2]);

    /*char st[100];
    while(!src.eof())
    {
        src>>st;
        dest<<st;
    }*/

    char ch;
    while((ch=src.get())!=EOF)
    {
        dest.put(ch);
    }
    src.close();
    dest.close();

}
