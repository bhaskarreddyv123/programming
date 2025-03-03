#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
	int id;
	struct st *link,*prev;
}ST;

ST *addlast(ST *ptr)
{
	ST *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(ST));
	if(newnode==NULL)
	{
		printf("node not created\n");
		return 0;
	}
	scanf("%d",&newnode->id);
	if(ptr==NULL)
	{
		ptr=newnode;
	}
	else
	{
		temp=ptr;
		while(temp->link)
		{
			temp=temp->link;
		}
		temp->link=newnode;
		newnode->prev=temp;
	}
	return ptr;
}


ST *deletelast(ST *ptr)
{
	ST *temp,*prev=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else if(ptr->link==NULL)
	{
		free(ptr);
		ptr=NULL;
	}

	else
	{
		temp=ptr;
		while(temp->link)
		{
			temp=temp->link;
		}
		temp->prev->link=NULL;
		free(temp->link);
		temp->link=NULL;
	}
	return ptr;
}


void print(ST *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	while(ptr!=NULL)
	{
		printf("%d ",ptr->id);
		ptr=ptr->link;
	}
	printf("\n");
}


int main()
{
	ST *head=NULL;
	int ch;
	while(1)
	{
		printf("enter 1.addlast 2.addfirst 3.deletelast 4.deletefirst 5.print 6.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=addlast(head);
			       break;
			case 3:head=deletelast(head);
			       break;
			case 5:print(head);
			       break;
			case 6:exit(0);
		}
	}
}
