#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

void createList(int n);
void display();

int main()
{
	int n;
	printf("Enter Number of Nodes: ");
	scanf("%d",&n);
	
	createList(n);
	
	printf("List: \n");
	display();
}

void createList(int n)
{
	struct node *newNode, *temp;
	int i, data;
	
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("List is Empty:");
	}
	else
	{
		printf("Enter Data: ");
		scanf("%d",&data);
		
		head->data = data;
		head->next = NULL;
		
		temp = head;
		
		for(i=2;i<=n;i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			
			printf("Enter Data: \n");
			scanf("%d",&data);
			
			newNode->data = data;
			newNode->next = NULL;
			
			temp->next = newNode;
			temp = newNode;
		}
		
		temp->next = head;
	}
}

void display()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is Empty:");
	}
	else
	{
		temp = head;
		do
		{
			printf("Data: %d\n",temp->data);
			temp = temp->next;
		}
		while(temp != head);
	}
}
