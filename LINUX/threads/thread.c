#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

// Shared resources
int mutex_counter = 0;
int spinlock_counter = 0;

// Synchronization primitives
pthread_mutex_t mutex;        // Mutex declaration
pthread_spinlock_t spinlock;  // Spinlock declaration

// Function for checking even or odd number
void *even_odd(void *arg)
{
    pthread_t thread_id = pthread_self();  // Get the thread's own ID
    printf("even_odd function Thread ID: %lu \n", thread_id);

    int num = *(int *)arg;
    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);

    pthread_exit(NULL);  // Exit the thread gracefully
}

// Thread function using mutex
void *increment_with_mutex(void *arg)
{
    int iterations = *((int*)arg);

    pthread_t thread_id = pthread_self();  // Get the thread's own ID
    printf("Mutex Increment Thread ID: %lu \n", thread_id);

    for (int i = 0; i < iterations; i++)
    {
        pthread_mutex_lock(&mutex);  // Lock the mutex
        mutex_counter++;            // Critical section
        usleep(100);                // Simulate a long critical section
        pthread_mutex_unlock(&mutex); // Unlock the mutex
    }

    pthread_exit(NULL);  // Exit the thread gracefully
}

// Thread function using spinlock
void *increment_with_spinlock(void *arg)
{
    int iterations = *((int*)arg);

    pthread_t thread_id = pthread_self();  // Get the thread's own ID
    printf("Spinlock Increment Thread ID: %lu \n", thread_id);

    for (int i = 0; i < iterations; i++)
    {
        pthread_spin_lock(&spinlock);  // Lock the spinlock
        spinlock_counter++;           // Critical section
        usleep(100);                  // Simulate a long critical section
        pthread_spin_unlock(&spinlock); // Unlock the spinlock
    }

    pthread_exit(NULL);  // Exit the thread gracefully
}

int main()
{
    pthread_t thread1, thread2, thread3, thread4;
    int n = 5;  // Example number for even/odd check
    int iterations = 10;  // Number of increments per thread

    // Initialize mutex and spinlock
    pthread_mutex_init(&mutex, NULL);
    pthread_spin_init(&spinlock, PTHREAD_PROCESS_PRIVATE);

    // Measure time for mutex
    clock_t start, end;

    start = clock();
    pthread_create(&thread1, NULL, increment_with_mutex, &iterations);
    pthread_create(&thread2, NULL, increment_with_mutex, &iterations);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    end = clock();
    printf("Final counter value with mutex: %d\n", mutex_counter);
    printf("Time taken with mutex: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC);




    // Measure time for spinlock
    start = clock();
    pthread_create(&thread3, NULL, increment_with_spinlock, &iterations);
    pthread_create(&thread4, NULL, increment_with_spinlock, &iterations);

    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);
    end = clock();
    printf("Final counter value with spinlock: %d\n", spinlock_counter);
    printf("Time taken with spinlock: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    
    
    
    // Create a thread for even/odd check
     pthread_create(&thread1, NULL, even_odd, &n);
     pthread_join(thread1, NULL);   // Wait for even/odd thread to finish

    
     
     // Destroy mutex and spinlock
    pthread_mutex_destroy(&mutex);
    pthread_spin_destroy(&spinlock);

    return 0;
}

