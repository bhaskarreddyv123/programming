#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int rear=-1;
int front=-1;
//int MAX=5;
int Queue[MAX];
void enqueue(int);
void dequeue();
void print();

int main()
{
	int a,n;
	while(1)
	{
		printf("1.enq 2.deq 3.print 4.exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("enter element\n");
			      scanf("%d",&a);
			      enqueue(a);
			      break;
			case 2:dequeue();
			      break;
			case 3:print();
			      break;
			case 4: exit(0);
		}
	}	

}
void enqueue(int a)
{
	if(rear==MAX-1)
	{
		printf("queue is full\n");
		return ;
	}
	if(front==-1)
	{
		front++;
	}
	Queue[++rear]=a;
}
void print()
{
	if(front>rear)
	{
		printf("queue is empty\n");
		return;
	}
	for(int i=front;i<=rear;i++)
	{
		printf("%d ",Queue[i]);
	}
	printf("\n");
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("dequeued element is %d\n",Queue[front]);
	front++;
	if(front>rear)
	{
		front=rear=-1;
	}
	
}
/*int Deq()
{
        int temp;
        temp=Q[front++];
        if(front==rear+1)
                front=rear=-1; // when all the data is deleted make queue as empty
        return temp;
}*/
