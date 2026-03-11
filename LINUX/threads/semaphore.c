#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_THREADS 3
#define MAX_RESOURCES 2 // Maximum threads allowed in the critical section

sem_t semaphore; // Semaphore declaration

// Function executed by each thread
void* thread_function(void* arg) 
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

int main() 
{
	pthread_t threads[NUM_THREADS];
	int thread_ids[NUM_THREADS];

	// Initialize semaphore with MAX_RESOURCES
	sem_init(&semaphore, 0, MAX_RESOURCES);

	// Create threads
	for (int i = 0; i < NUM_THREADS; i++)
	{
		thread_ids[i] = i + 1;
		pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]);
	}

	// Wait for threads to complete
	for (int i = 0; i < NUM_THREADS; i++) 
	{
		pthread_join(threads[i], NULL);
	}

	// Destroy the semaphore
	sem_destroy(&semaphore);

	printf("All threads have completed.\n");
	return 0;
}

