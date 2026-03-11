#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

// Definitions for the semaphore example
#define NUM_THREADS 3
#define MAX_RESOURCES 2

sem_t semaphore; // Semaphore declaration

// Definitions for the mutex example
int shared_counter_mutex = 0; // Shared resource for mutex
pthread_mutex_t mutex;        // Mutex declaration

// Definitions for the spinlock example
int shared_counter_spin = 0; // Shared resource for spinlock
pthread_spinlock_t spinlock; // Spinlock declaration

// Semaphore example thread function
void* semaphore_thread_function(void* arg) 
{
	int thread_id = *(int*)arg;

	printf("Thread %d: Waiting to enter critical section...\n", thread_id);

	sem_wait(&semaphore); // Decrement semaphore (wait)
	printf("Thread %d: Entered critical section.\n", thread_id);

	// Simulating work in the critical section
	sleep(2);

	printf("Thread %d: Exiting critical section.\n", thread_id);
	sem_post(&semaphore); // Increment semaphore (signal)

	return NULL;
}

// Mutex example thread function
void* mutex_thread_function(void* arg)
{
	for (int i = 0; i < 10; i++) 
	{
		//pthread_mutex_lock(&mutex);        // Lock the mutex
		shared_counter_mutex++;            // Critical section
		printf("Mutex Thread %ld incremented counter to %d\n", pthread_self(), shared_counter_mutex);
		//pthread_mutex_unlock(&mutex);      // Unlock the mutex
		usleep(100 * 1000);  // Simulate some delay (100ms)
	}
	pthread_exit(NULL);
}

// Spinlock example thread function
void* spinlock_thread_function(void* arg)
{
	int thread_id = *(int*)arg;

	for (int i = 0; i < 10; i++) 
	{
		//pthread_spin_lock(&spinlock);  // Lock the spinlock
		shared_counter_spin++;        // Critical section
		printf("Spinlock Thread %d incremented counter to %d\n", thread_id, shared_counter_spin);
		//pthread_spin_unlock(&spinlock);  // Unlock the spinlock
		usleep(100 * 1000);  // Simulate some delay (100ms)
	}

	return NULL;
}

// Function to demonstrate semaphore usage
void run_semaphore_example() 
{
	pthread_t threads[NUM_THREADS];
	int thread_ids[NUM_THREADS];

	// Initialize the semaphore
	sem_init(&semaphore, 0, MAX_RESOURCES);

	// Create threads for the semaphore example
	for (int i = 0; i < NUM_THREADS; i++) 
	{
		thread_ids[i] = i + 1;
		pthread_create(&threads[i], NULL, semaphore_thread_function, &thread_ids[i]);
	}

	// Wait for threads to finish
	for (int i = 0; i < NUM_THREADS; i++) 
	{
		pthread_join(threads[i], NULL);
	}

	// Destroy the semaphore
	sem_destroy(&semaphore);

	printf("Semaphore example completed.\n");
}

// Function to demonstrate mutex usage
void run_mutex_example() 
{
	pthread_t thread1, thread2;

	// Initialize the mutex
	pthread_mutex_init(&mutex, NULL);

	// Create two threads for the mutex example
	pthread_create(&thread1, NULL, mutex_thread_function, NULL);
	pthread_create(&thread2, NULL, mutex_thread_function, NULL);

	// Wait for both threads to finish
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	// Destroy the mutex
	pthread_mutex_destroy(&mutex);

	// Print the final counter value
	printf("Final counter value (mutex): %d\n", shared_counter_mutex);
}

// Function to demonstrate spinlock usage
void run_spinlock_example() 
{
	pthread_t thread1, thread2;
	int thread_id1 = 1, thread_id2 = 2;

	// Initialize the spinlock
	pthread_spin_init(&spinlock, PTHREAD_PROCESS_PRIVATE);

	// Create two threads for the spinlock example
	pthread_create(&thread1, NULL, spinlock_thread_function, &thread_id1);
	pthread_create(&thread2, NULL, spinlock_thread_function, &thread_id2);

	// Wait for threads to finish
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	// Destroy the spinlock
	pthread_spin_destroy(&spinlock);

	// Print the final counter value
	printf("Final counter value (spinlock): %d\n", shared_counter_spin);
}

int main()
{
	printf("Running Semaphore Example...\n");
	run_semaphore_example();

	//printf("\nRunning Mutex Example...\n");
	//run_mutex_example();

	//printf("\nRunning Spinlock Example...\n");
	//run_spinlock_example();

	return 0;
}

