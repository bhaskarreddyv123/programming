/* inline function means , it requests compiler to replace the defination in the place of it's function call.
 * either compiler replaces or not is purely depend on deccission of compiler.
 * if recursion, nested loops, goto funtcion like these difficult func it doesn't replace
 */


#include<iostream>
using namespace std;
inline int add(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	int res=add(a,b);
	cout<<"res "<<res<<endl;
}
int add(int a,int b)
{
	return(a+b);
}
