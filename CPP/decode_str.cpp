#include <iostream>
using namespace std;


string  no_of_times(string str,int num)
{
	string result;
	if(num==0 || num==1)
	{
		return str;
	}
	else
	{
		while(num>0)
		{
			result=result+str;
			num--;
		}
		return result;
	}
}

int main()
{
	string str,str1,decodestr;
	int num=0,j,i=0;

	cout<<"enter string"<<endl;
	cin>>str;

	while(str[i])
	{
		if(str[i]>=48 && str[i]<=57)
		{
			num=num*10+str[i]-48;
		}
		else if(str[i]=='[')
		{
			i++;
			str1="";
			while(str[i]!=']' && str[i]!='\0')
			{
				str1+=str[i];
				i++;
			}
			decodestr+=no_of_times(str1,num);
			num=0;
		}
		i++;
	}
	cout<<decodestr<<endl;
}
