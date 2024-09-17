#include "header.h"
#include <stdio.h>

void inc() {
    count++;
}

void print() {
    printf("Counter in file1: %d\n", count);
}

int main() {
    inc();
    print();
    return 0;
}

