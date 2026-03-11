#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem;

void* worker(void* arg) {
    sem_wait(&sem); // acquire
    printf("Thread %ld entered critical section\n", (long)arg);
    sleep(1);
    printf("Thread %ld leaving critical section\n", (long)arg);
    sem_post(&sem); // release
    return NULL;
}

int main() {
    pthread_t t[5];
    sem_init(&sem, 0, 3); // allow 2 threads at once

    for (long i = 0; i < 5; i++)
        pthread_create(&t[i], NULL, worker, (void*)i);

    for (int i = 0; i < 5; i++)
        pthread_join(t[i], NULL);

    sem_destroy(&sem);
    return 0;
}

