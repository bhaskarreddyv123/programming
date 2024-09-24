#include<iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"");  // this will change the current locale to Character classifications
	wchar_t ch; // ch is the varible of type wide character
	//for(ch=2304;ch<2431;ch++)
	//for(ch=2688;ch<=2815;ch++)
	//for(ch=9728;ch<=9983;ch++)
	for(ch=0x0C05;ch<=0x0C39;ch++)
	{
		wcout<<ch<<" ";
	}
	wcout<<"\n";
}


