#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
	char name[20];
	int id;
	struct st *link;
}STU;
STU * add(STU *ptr)
{
	STU *temp=NULL,*newnode=NULL;
	newnode=calloc(1,sizeof(STU));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		scanf("%s",newnode->name);
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
		}
	}
	return ptr;
}

STU *addfirst(STU *ptr)
{
	STU *newnode=NULL;
	newnode=malloc(1*sizeof(STU));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		scanf("%s%d",newnode->name,&newnode->id);
		newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}

STU *delete(STU *ptr)
{
	STU *temp=NULL;
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
		while(temp->link->link)
		{
			temp=temp->link;
		}
		free(temp->link);
		temp->link=NULL;
	}
	return ptr;
}

STU *deletefirst(STU *ptr)
{
	STU *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		ptr=ptr->link;
		free(temp);
		temp=NULL;
	}
	return ptr;
}

void print(STU *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	while(ptr)
	{
		printf("%s %d\n",ptr->name,ptr->id);
		ptr=ptr->link;
	}
}

STU *reverse(STU *ptr)
{
	STU *prev=NULL,*next=NULL,*temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp)
		{
			next=temp->link;
			temp->link=prev;
			prev=temp;
			temp=next;
		}
	}
	return prev;
}

STU *print_del_nth_end(STU *ptr)
{
	int n,i=0;
	STU *first=ptr,*second=ptr,*prev=NULL;
	printf("enter a node to print and delete fron last\n");
	scanf("%d",&n);
	while(i<n)
	{
		if(first!=NULL)
		{
			first=first->link;
		}
		else
		{
			printf("given node is beyond the list\n");
			return ptr;
		}
		i++;
	}
	while(first)
	{
		first=first->link;
		prev=second;
		second=second->link;
	}
	printf("%dth node from is %s %d\n",n,second->name,second->id);
	if(ptr==second)
	{
		ptr=ptr->link;
	}
	else
	{
		prev->link=second->link;
	}
	free(second);
	second=NULL;
	return ptr;
}

int main()
{
	STU *head=NULL;
	int ch;
	while(1)
	{
		printf("enter 1.addlast 2.addfirst 3.deletelast 4.deletefirst 5.display 6.reverse 7.print_delete_nth_end 8.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=add(head);
			       break;
			case 2:head=addfirst(head);
			       break;
			case 3:head=delete(head);
			       break;
			case 4:head=deletefirst(head);
			       break;
			case 5:print(head);
			       break;
			case 6:head=reverse(head);
			       break;
			case 7:head=print_del_nth_end(head);
			       break;
			case 8:exit(0);
		}
	}
}

