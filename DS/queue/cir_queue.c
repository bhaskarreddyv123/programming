#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int Queue[MAX];
int rear=-1;
int front=-1;
void enq(int);
void deq();
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
			case 1:printf("enter element ");
			       scanf("%d",&a);
			       enq(a);
			       break;

			case 2:deq();
			       break;

			case 3:print();
			       break;

			case 4:exit(0);
		}
	}
}

void enq(int a)
{
	if((rear+1)%MAX==front)
	{
		printf("Queue is full\n");
		return;
	}
	if(front==-1)
		front=0;

	rear=(rear+1)%MAX;
	Queue[rear]=a;
}
void deq()
{
	if((front+1)%MAX==rear)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("dequeued element is %d\n",Queue[front]);
	if(front==rear)
	{
		front=rear=-1;
	}
	front=(front+1)%MAX;
}
void print()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	int i=front;
	while(1)
	{
		printf("%d ",Queue[i]);
		if(i==rear)
			break;
		i=(i+1)%MAX;
	}
	printf("\n");
}
