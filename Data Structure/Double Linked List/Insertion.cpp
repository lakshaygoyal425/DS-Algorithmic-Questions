#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
}*head, *last;

void createList(int n);
void display();
void insertatbeginning(int data);
void insertatend(int data);
void insertatposition(int data, int n);

int main()
{
	int n, data, choice=1;
	
	head = NULL;
	last = NULL;
	
	while(choice!=0)
	{
		printf("Double Linked List Program:\n");
		printf("1. Create List\n");
		printf("2. Insert at Beginning\n");
		printf("3. Insert at End\n");
		printf("4. Insert at Position\n");
		printf("5. Display List\n");
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
				printf("Enter data of first node: ");
				scanf("%d",&data);	
				
				insertatbeginning(data);
				break;
				
			case 3:
				printf("Enter data of end node: ");
				scanf("%d",&data);	
				
				insertatend(data);
				break;
				
			case 4:
				printf("Enter Position: \n");
				scanf("%d",&n);
				printf("Enter data of end node: ");
				scanf("%d",&data);	
				
				insertatposition(data, n);
				break;
			case 5:
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

void insertatbeginning(int data)
{
	struct node *newNode;
	if(head == NULL)
	{
		printf("List is Empty:");
	}
	else
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		
		newNode->data = data;
		newNode->next = head;
		newNode->prev = NULL;
		
		head->prev = newNode;
		head = newNode;
	}
}

void insertatend(int data)
{
	struct node *newNode;
	if(head == NULL)
	{
		printf("List is Empty:");
	}
	else
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = last;
		
		last->next = newNode;
		last = newNode;	
	}
}

void insertatposition(int data, int position)
{
	int i;
	struct node *newNode, *temp;
	
	if(head == NULL)
	{
		printf("List is Empty");
	}
	else
	{
		temp = head;
		i=1;
		
		while(i<position-1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		
		if(position == 1)
		{
			insertatbeginning(data);
		}
		else if(temp = last)
		{
			insertatend(data);
		}
		else if(temp != NULL)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			
			newNode->data = data;
			newNode->next = temp->next;
			newNode->prev = temp;
			
			temp->next = newNode;
		}
	}
}
