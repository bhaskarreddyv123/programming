

#include <stdio.h>
#include <stdlib.h>
struct st
{
	int a;
	struct st *link;
};

void print(struct st *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->a);
		ptr=ptr->link;
	}
}

int main()
{
	struct st *ptr=NULL,*newnode=NULL,*temp;
	int node,i;
	for(i=0;i<5;i++)
	{
		newnode=(struct st*)calloc(1,sizeof(struct st));
		if(newnode==NULL)
		{
			printf("memory not created");
		}
		scanf("%d",&newnode->a);
		// printf("%d\n",newnode->a);
		if(ptr==NULL)
		{
			ptr=newnode;

			// printf("%d",ptr->a);
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
	print(ptr);
	printf("\nenter the node to delete ");
	scanf("%d",&node);
	struct st *prev=NULL;
	temp=ptr;
	while(temp)
	{
		struct st *del=temp;
		if(temp->a==node)
		{
			if(prev==NULL)
			{
				ptr=temp->link;
				free(temp);
				temp=ptr;

			}
			else
			{
				prev->link=temp->link;
				free(temp);
				temp=prev->link;
			}
			//continue;
		}

		prev=temp;
		temp=temp->link;

	}


	print(ptr);


}

















