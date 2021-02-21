#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
}*head, *last;

void createList(int n);
void display();
void deletefrombeginning();
void deletefromend();
void deletefromposition(int n);

int main()
{
	int n, data, choice=1;
	
	head = NULL;
	last = NULL;
	
	while(choice!=0)
	{
		printf("Double Linked List Program:\n");
		printf("1. Create List\n");
		printf("2. Delete at Beginning\n");
		printf("3. Delete at End\n");
		printf("4. Delete at Position\n");
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
				deletefrombeginning();
				break;
				
			case 3:
				deletefromend();
				break;
				
			case 4:
				printf("Enter Position: \n");
				scanf("%d",&n);
				deletefromposition(n);
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

void deletefrombeginning()
{
	struct node *todelete;
	if(head == NULL)
	{
		printf("List is Empty:");
	}
	else
	{
		todelete = head;
		head = head->next;
		
		if(head != NULL)
		{
			head->prev = NULL;
		}
		
		free(todelete);
	}
}

void deletefromend()
{
	struct node *todelete;
	if(last == NULL)
	{
		printf("List is Empty:");
	}
	else
	{
		todelete = last;
		last = last->prev;
		
		if(last != NULL)
		{
			last->next = NULL;
		}
		
		free(todelete);
	}
}

void deletefromposition(int position)
{
	int i;
	struct node *temp;
	
	temp = head;
	for(i=1;i<position && temp!=NULL;i++)
	{
		temp = temp->next;
	}
	
	if(position == 1)
   	{
       	deletefrombeginning();
    }
    	
    else if(temp == last)
    {
       	deletefromend();
    }
    else if(temp != NULL)
    {
    	temp->prev->next = temp->next;
    	temp->next->prev = temp->prev;
    	
    	free(temp);
	}
}
