#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Shared resource
int shared_counter = 0;

// Spinlock declaration
pthread_spinlock_t spinlock;

// Function to increment the shared counter
void* increment_counter(void* arg)
{
    int thread_id = *(int*)arg;

    for (int i = 0; i < 10; i++) 
    {
       // pthread_spin_lock(&spinlock);  // Lock the spinlock
        shared_counter++;             // Critical section
        printf("Thread %d incremented counter to %d\n", thread_id, shared_counter);
        //pthread_spin_unlock(&spinlock);  // Unlock the spinlock
        usleep(100*1000);  // Simulate some delay (100ms)
    }

    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    int thread_id1 = 1, thread_id2 = 2;

    // Initialize the spinlock
    pthread_spin_init(&spinlock, PTHREAD_PROCESS_PRIVATE);

    // Create threads
    pthread_create(&thread1, NULL, increment_counter, &thread_id1);
    pthread_create(&thread2, NULL, increment_counter, &thread_id2);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Destroy the spinlock
    pthread_spin_destroy(&spinlock);

    // Print the final value of the shared counter
    printf("Final counter value: %d\n", shared_counter);

    return 0;
}

