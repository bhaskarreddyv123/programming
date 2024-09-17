#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int gpio(int n, int i) {
    if (n == 0) {
        return 1;
    } else {
        return 0;
    }
}

int k = -1;
pthread_mutex_t mutex;

void* monitor_thread(void* arg) {
    int n = 0, j = 2;
    int pin;
    
    while (1) {
        pin = gpio(n, j);  // Assuming gpio function should be called here
        pthread_mutex_lock(&mutex);
        if (pin != k) {
            k = pin;
        }
        pthread_mutex_unlock(&mutex);
        usleep(100000);  // Sleep for 100 ms to avoid busy-waiting
    }
}

void* print_thread(void* arg) {
    int last_k = -1;

    while (1) {
        pthread_mutex_lock(&mutex);
        if (k != last_k) {
            printf("%d\n", k);
            last_k = k;
        }
        pthread_mutex_unlock(&mutex);
        usleep(100000);  // Sleep for 100 ms to avoid busy-waiting
    }
}

int main() {
    pthread_t monitor_tid, print_tid;
    pthread_mutex_init(&mutex, NULL);

    pthread_create(&monitor_tid, NULL, monitor_thread, NULL);
    pthread_create(&print_tid, NULL, print_thread, NULL);

    pthread_join(monitor_tid, NULL);
    pthread_join(print_tid, NULL);

    pthread_mutex_destroy(&mutex);
    return 0;
}

