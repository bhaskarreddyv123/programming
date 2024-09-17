#include <stdio.h>
#include <stdbool.h>

// Non-volatile variable example
bool flag;

void non_volatile_example() 
{
	int i=0;
	printf("flag=%d\n",flag);
    while (!flag)
    {
	    if(i==9)
		    flag=true;
	    printf("%d ",i);
	    i++;
        
	    // Do something
    }
    printf("Flag is set!\n");
}

// Volatile variable example
volatile bool v_flag = false;
void volatile_example() 
{
	int i=0;
    while (!v_flag) {
	    if(i==9)
		    v_flag=true;
	    printf("%d ",i);
	    i++;
        // Do something
    }
    printf("Volatile flag is set!\n");
}

int main() {
    // Example usage
    printf("Non-volatile example:\n");
    flag = false;  // Set the flag to exit the loop
    non_volatile_example();

    printf("\nVolatile example:\n");
    v_flag = false;  // Set the volatile flag to exit the loop
    volatile_example();

    return 0;
}

