#include <stdio.h>
#include<stdlib.h>
typedef  struct Student
{
	int roll;
	char name[20];
	struct Student *link; // selfreferential pointer
}STU;
STU * syncfromfile(STU *);
STU * AddLast(STU *);
void Print(STU *);
STU* reverse(STU *);
STU * delFirst(STU *);
void print_nth_end(STU *,int);
int main()
{
	STU *head=NULL;
	int choice,n;
	//head=syncfromfile(head);
	while(1)
	{
		printf("1.Add 2.Print 3.Del 4.reverse 5.print_nthnode_end 6.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{case 1: head=AddLast(head);
			break;
		case 2: Print(head);
			break;
		case 3: head=delFirst(head);
			break;
		case 4:head=reverse(head);
			break;

		case 5:printf("enter position of the element\n");
		       scanf("%d",&n);
		       print_nth_end(head,n);
		       break;
		case 6:exit(0);
		}
	}
}
STU * AddLast(STU *ptr)
{
	STU *newnode=NULL,*temp=NULL;
	/*** cration of node ***/
	newnode=calloc(1,sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
	/*** node created successfully **/
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);

		/*** link to list **/
		if(ptr==NULL)  // list is empty
		{
			ptr=newnode; // adding newnode as first node
		}
		else // list already existing then we need to traverse upto last node
		{
			temp=ptr;
			while(temp->link!=NULL) // if temp is not lat node them move to next node
			{
				temp=temp->link;
			}
			temp->link=newnode;// linking newnode to last node
		}
	}
return ptr;
}
STU * delFirst(STU *ptr)
{
	STU *temp=NULL;
	if(ptr==NULL)// list is empty
	{
		printf("List is empty\n");
	}
	else
	{
		temp=ptr; // assigning current first node to temp
		ptr=ptr->link;// moving to next
		free(temp); // deleting current firstnode
	}
	return ptr;// retunring new firstnode
}
void Print(STU *ptr)
{
	if(ptr==NULL) // list is empty
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)// traverse upto end of the list
		{
			printf("%d %s ....%p\n",ptr->roll,ptr->name,(void*)ptr);
			ptr=ptr->link; // moving to next node
		}
	}
}
STU * reverse(STU *ptr)
{
	STU *temp=NULL,*prev=NULL,*next=NULL;
	if(ptr==NULL) // list is empty
	{
		printf("List is empty\n");
	}
	else if(ptr->link==NULL)
	{
		printf("List is having only one node\n");
	}
	else
	{
		temp=ptr;
		while(temp!=NULL)
		{
			next=temp->link;
			//temp=temp->link;
			temp->link=prev;
			prev=temp;
			temp=next;
		}
	}
	ptr=prev;
	return ptr;

}

void print_nth_end(STU *head,int n)
{
	STU *first=head;
	STU *second=head;

	for(int i=0;i<n;i++)
	{
		if(first==NULL)
		{
			printf("list is smaller than given node\n");
			return;
		}
		first=first->link;
	}

	while(first!=NULL)
	{
		first=first->link;   
		second=second->link;
	}
	printf("%d node from end are %d %s\n",n,second->roll,second->name);
}

