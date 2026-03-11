#include <stdio.h>
void print(int num)
{
    for(int i=32;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
    }
    printf("\n");
}
int main()
{
    int num,n,m;
    scanf("%d",&num);
    print(num);
    printf("enter n and m position range for bits \n");
    scanf("%d %d",&n,&m);
    num=num | ((1<<(m-n+1))-1)<<n;
    printf("%d\n",num);
    print(num);

    return 0;
}
