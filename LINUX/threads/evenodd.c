#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>


// Function to print even numbers
void *print_even(void *arg) 
{
	int num=*(int *)arg;
	printf("Even numbers in the range %d, %d:\n", 0, num);

	for (int i = 0; i <= num; i++) 
	{
		if (i % 2 == 0) 
		{
			printf("%d \n", i);
		}
	}
	printf("\n");
	pthread_exit(NULL);  // Exit the thread gracefully
}

// Function to print odd numbers
void *print_odd(void *arg) 
{
	int num=*(int *)arg;
	printf("odd numbers in the range %d, %d:\n", 0, num);

	for (int i = 0; i <= num; i++) 
	{
		if (i % 2 != 0) 
		{
			printf("%d \n", i);
		}
	}
	printf("\n");
	pthread_exit(NULL);  // Exit the thread gracefully
}

int main() 
{
	pthread_t even_thread, odd_thread;
	int range=10;

	// Create threads for even and odd printing
	pthread_create(&even_thread, NULL, print_even, &range);
	pthread_create(&odd_thread, NULL, print_odd, &range);

	// Wait for both threads to finish
	pthread_join(even_thread, NULL);
	pthread_join(odd_thread, NULL);
        printf("Both threads have completed their work.\n");
	return 0;
}

