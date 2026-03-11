#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *link;
};

void enque(int);
int deque();

struct queue *top;
int main()
{
	int i,n;
	while(1)
	{
	        printf("1.enque 2.deque 3.exit\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("enter the element\n");
			       scanf("%d",&n);
			       enque(n);
			       break;
			case 2:n=deque();
			       printf("dequed element is %d\n",n);
			       break;
			case 3:return 0;
		}
	}
}

void enque(int n)
{
	struct queue *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(struct queue));
	if(newnode==NULL)
	{
		printf("newnode not created\n");
		return ;

	}
	newnode->data=n;
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		temp=top;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=newnode;
	}
}

int deque()
{
	int n;
	struct queue *temp=NULL;
	if(top==NULL)
	{
		printf("queue is empty\n");
		return 0;
	}
	temp=top;
	top=top->link;
	n=temp->data;
	free(temp);
	return n;
}





