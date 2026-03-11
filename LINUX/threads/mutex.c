#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int shared_counter = 0;       // Shared resource
pthread_mutex_t mutex;        // Mutex declaration

// Function executed by each thread
void *increment_counter(void *arg)
{
    for (int i = 0; i < 10; i++) 
    {
        pthread_mutex_lock(&mutex);        // Lock the mutex
        shared_counter++;                  // Critical section
        printf("Thread %ld incremented counter to %d\n", pthread_self(), shared_counter);
        pthread_mutex_unlock(&mutex);      // Unlock the mutex
	usleep(100*1000);                  // not use sleep then thread1 incre first 1 to 10 then thread2 increases 11 to 20
    }
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread1, thread2;

    // Initialize the mutex
    pthread_mutex_init(&mutex, NULL);

    // Create two threads
    pthread_create(&thread1, NULL, increment_counter, NULL);
    pthread_create(&thread2, NULL, increment_counter, NULL);

    // Wait for both threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    // Print the final counter value
    printf("Final counter value: %d\n", shared_counter);

    return 0;
}

