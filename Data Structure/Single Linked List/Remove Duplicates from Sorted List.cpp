#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *next;
}*head;

void createList(int n);
void display();
void removeDuplicate();

int main()
{
	int n;
	printf("Enter Number of Nodes: \n");
	scanf("%d",&n);
	
	createList(n);
	printf("List is : \n");
	display();
	
	removeDuplicate();
	printf("\nList: \n");
	display();
}

void createList(int n)
{
	int data, i;
	struct node *newNode, *temp;
	
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("Unable\n");
		exit(0);
	}
	
	printf("Enter Data: \n");
	scanf("%d",&data);
	
	head->data = data;
	head->next = NULL;
	
	temp = head;
	for(i=2;i<=n;i++)
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		if(newNode == NULL)
		{
			printf("Unable\n");
		}
		
		printf("Enter Data: \n");
		scanf("%d",&data);
		
		newNode->data = data;
		newNode->next = NULL;
		
		temp->next = newNode;
		temp = temp->next;
	}
}

void display()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("List is empty: \n");
	}
	
	temp = head;
	while(temp != NULL)
	{
		printf("Data: %d\n",temp->data);
		temp = temp->next;
		
	}
}

void removeDuplicate()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("list is empty: \n");
	}
	
	temp = head;
	while(temp->next != NULL)
	{
		if(temp->data == temp->next->data)
		{
			struct node *newNode = temp->next->next;
			free(temp->next);
			temp->next = newNode;
		}
		else
		{
			temp = temp->next;
		}
	}
}
