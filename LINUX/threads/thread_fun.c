#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Function to create and start a thread
void create_thread(pthread_t *thread, void *(*start_routine)(void *), void *arg) {
    int result = pthread_create(thread, NULL, start_routine, arg);
    if (result != 0) {
        perror("Thread creation failed");
        exit(1);
    }
}

// Function for the thread's main task
void *thread_function(void *arg) {
    pthread_t thread_id = pthread_self();  // Get the thread's own ID
    printf("Thread %lu is running.\n", thread_id);

    // Simulate some work
    for (int i = 0; i < 3; i++) {
        printf("Thread %lu working: %d\n", thread_id, i + 1);
        sleep(1);  // Simulate some work
    }

    pthread_exit(NULL);  // Exit the thread gracefully
}

// Function to join a thread (wait for it to finish)
void join_thread(pthread_t thread) {
    int result = pthread_join(thread, NULL);
    if (result != 0) {
        perror("Thread join failed");
        exit(1);
    }
}

// Function to demonstrate `pthread_self` and printing the thread ID
void print_thread_id() {
    pthread_t thread_id = pthread_self();
    printf("Current thread ID is: %lu\n", thread_id);
}

int main() {
    pthread_t thread1, thread2;

    // Print main thread ID
    print_thread_id();

    // Create two threads
    create_thread(&thread1, thread_function, NULL);
    create_thread(&thread2, thread_function, NULL);

    // Join the threads (wait for them to finish)
    join_thread(thread1);
    join_thread(thread2);

    printf("All threads have completed their work.\n");

    return 0;
}

