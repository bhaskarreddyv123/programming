#include <stdio.h>
int add(int a, int b)
{
    while(b!=0)
    {
        int carry=a&b;
        a=a^b;
        b=carry;
    }
    return a;
}
int main() {
    int num,rem,sum=0;;
    scanf("%d",&num);
    while(num)
    {
        rem=num%10;
        sum=add(sum,rem);
        num=num/10;
    }
    printf("%d",sum);

    return 0;
}
