#include <stdio.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>

pthread_mutex_t mutex;

void* low_priority_task(void* arg) {
    printf("Low-priority task: locking mutex\n");
    pthread_mutex_lock(&mutex);
    printf("Low-priority task: holding mutex\n");
    sleep(5);  // simulate work
    pthread_mutex_unlock(&mutex);
    printf("Low-priority task: released mutex\n");
    return NULL;
}

void* high_priority_task(void* arg) {
    sleep(1);  // wait so low-priority locks first
    printf("High-priority task: trying to lock mutex\n");
    pthread_mutex_lock(&mutex);
    printf("High-priority task: acquired mutex\n");
    pthread_mutex_unlock(&mutex);
    return NULL;
}

int main() {
    pthread_t low, high;

    // Initialize mutex with priority inheritance
    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_setprotocol(&attr, PTHREAD_PRIO_INHERIT);
    pthread_mutex_init(&mutex, &attr);

    pthread_create(&low, NULL, low_priority_task, NULL);
    pthread_create(&high, NULL, high_priority_task, NULL);

    pthread_join(low, NULL);
    pthread_join(high, NULL);

    pthread_mutex_destroy(&mutex);
    return 0;
}

