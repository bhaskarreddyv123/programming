#include<stdio.h>
void fun(int n)
{
    int arr[5],i;
    for(i=0;i<=n;i++)
    {
        arr[i]=i;
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
int main()
{
    int n=6;
    fun(n);
    return 0;
}