#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define SHARED_FILE "data.txt"

int main() {
    int fd = open(SHARED_FILE, O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    int counter;
    while (read(fd, &counter, sizeof(counter)) > 0) {
        printf("Counter value: %d\n", counter);
    }

    close(fd);
    return 0;
}

