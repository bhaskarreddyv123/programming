#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc==1)
    return 0;
    
    printf("%c",*(argv[1]+1));
    printf("%c",(*(argv+1))[2]);
    printf("%c",argv[1][2]);

    return 0;
}
