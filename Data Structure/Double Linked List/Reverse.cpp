#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
}*head, *last;

void createList(int n);
void display();
void reverse();

int main()
{
	int n, data, choice=1;
	
	head = NULL;
	last = NULL;
	
	while(choice!=0)
	{
		printf("Double Linked List Program:\n");
		printf("1. Create List\n");
		printf("2. Reverse List\n");
		printf("3. Display List\n");
		printf("0. Exit\n");
		printf("------------------------------\n");
		printf("Enter your Choice: \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter number of nodes: ");
				scanf("%d",&n);
				createList(n);
				break;
			case 2:
				reverse();
			case 3:
				display();
			case 0:
				break;
			default:
				printf("Invalid Choice:");			
		}
		printf("\n\n\n");
	}	
}

void createList(int n)
{
	int i, data;
	struct node *newNode;
	
	if(n>=1)
	{
		head = (struct node *)malloc(sizeof(struct node));
		
		printf("Enter Data: ");
		scanf("%d",&data);
		
		head->data = data;
		head->next = NULL;
		head->prev = NULL;
		
		last = head;
		
		for(i=2;i<=n;i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			printf("Enter Data: \n");
			scanf("%d",&data);
			
			newNode->data = data;
			newNode->next = NULL;
			newNode->prev = last;
			
			last->next = newNode;
			last = newNode;
		}
	}
}

void display()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is Empty\n");	
	}	
	else
	{
		temp = head;
		while(temp != NULL)
		{
			printf("Data: %d\n",temp->data);
			temp = temp->next;
		}
	}
}

void reverse()
{
	struct node *current, *temp;
	
	current = head;
	while(current != NULL)
	{
		temp = current->next;
		current->next = current->prev;
		current->prev = temp;
		
		current = temp;
	}
	
	temp = head;
	head = last;
	last = temp;
}
