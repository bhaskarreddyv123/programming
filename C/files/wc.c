#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide a filename.\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    int Ccnt = 0, Wcnt = 0, Lcnt = 0;
    char str[80];

    // Count characters
    fseek(fp, 0, SEEK_END);
    Ccnt = ftell(fp);
    rewind(fp);

    // Count words
    while (fscanf(fp, "%s", str) == 1) {
        Wcnt++;
    }

    // Count lines
    rewind(fp);
    while (fgets(str, sizeof(str), fp) != NULL) {
        Lcnt++;
    }

    fclose(fp);

    printf("Character count = %d\nWord count = %d\nLine count = %d\n", Ccnt, Wcnt, Lcnt);
    return 0;
}

