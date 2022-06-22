#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data ;
	struct node *next ;
};
struct node *head=NULL,*pos=NULL,*temp=NULL,*del=NULL,*new;

void enqueue (int x)
{	
		if (head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head -> data =x;
			new=head;
		}
		else
		{
			new->next=(struct node *)malloc(sizeof(struct node));
			new=new-> next;
			new->data=x;
		}
}


void dequeue()
{
	if (head==NULL)
	{
		printf("Queue Underflow");
		printf("\n");
	}
	else
	{
		del=head;
		head=head->next;
		free(del);
		pos=head;
		if(head==NULL)
		{
			printf("No elements");
			printf("\n");
		}
		else
		{
			printf("The elements now are:\n");
			while(pos !=NULL)
			{
				printf("%d\n",pos->data);
				pos=pos->next;
			}
			printf("\n");
		}
	}
	
}

void display()
{
	if(head==NULL)
	{
		printf("No elements present");
		printf("\n");
	}
	else
	{

		pos=head;
		printf("\nElements are :\n");
		while (pos !=NULL)
		{
			printf("%d\n",pos -> data);
			pos =pos  -> next;
		}
		printf("\n");
	}
}

void main()
{
	int ch,i;
	printf("\n1.enuque  \n2.dqeueue \n3.display \n4.exit");
	while(1)
	{
		printf("Enter your choice \n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				{
					printf("Enter the value to be Entered:");
				      	scanf("%d",&i);
				      	enqueue(i);
				} 
				break;  			
			case 2: 
				{
					dequeue();
				}
				break;
			case 3:
				{
					display();
				}
				break;
			case 4:
				{
					printf("bye\n");
					exit(0);
				}
			default:
				printf("wrong option !");
		}
	}
}
