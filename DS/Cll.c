#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	char name[20];
	struct st *link;
}ST;
ST *addlast(ST *ptr)
{
	ST *newnode=NULL, *temp=NULL;
	newnode=calloc(1,sizeof(ST));
	if(newnode==NULL)
	{
		printf("memory not created\n");
		return 0;
	}
	scanf("%d",&newnode->roll);
	scanf("%s",newnode->name);
	if(ptr==NULL)
	{
		ptr=newnode;
		newnode->link=ptr;
	}
	else
	{
		temp=ptr;
		while(temp->link!=ptr)
		{
			temp=temp->link;
		}
		temp->link=newnode;
		newnode->link=ptr;
	}
	return ptr;
}


void print(ST *ptr)
{
	ST *temp=NULL;
	temp=ptr;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	do
	{
		printf("%d %s\n",temp->roll,temp->name);
		temp=temp->link;
	}while(temp!=ptr);
}


ST * find_firstnode(ST *ptr)
{
	ST *sptr=ptr,*fptr=ptr;

	while(fptr && fptr->link)
	{
		sptr=sptr->link;
		fptr=fptr->link->link;

		if(sptr==fptr)
		{
			/*sptr=ptr;
			while(sptr!=fptr)
			{
				sptr=sptr->link;
				fptr=fptr->link;
			}*/
			return sptr;
		}
	}
	return NULL;
}

int main()
{
	ST *head=NULL,*firstnode=NULL;
	int ch;
	while(1)
	{
		printf("1.add 2.print 3.firstnodde 4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{

			case 1: head=addlast(head);
				break;
			case 2: print(head);
				break;
			case 3:firstnode=find_firstnode(head->link);
			       if(firstnode==NULL)
			       {
				       printf("No CLL\n");
			       }
			       else
			       {
				       printf("firstnode is  %d %s\n",firstnode->roll,firstnode->name);
			       }
			       break;
			case 4:exit(0);
		}
	}
}
