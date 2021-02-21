#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

void createList(int n);
void display();
void insertAtBeginning(int data);
void insertAtN(int data, int n);

int main()
{
	int n, data, choice=1;

    head = NULL;

    
    while(choice != 0)
    {
        printf("============================================\n");
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("============================================\n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at any position\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter data to be inserted at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 4:
                printf("Enter node position: ");
                scanf("%d", &n);
                printf("Enter data you want to insert at %d position: ", n);
                scanf("%d", &data);
                insertAtN(data, n);
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-4");
        }

        printf("\n\n\n\n\n");
    }

    return 0;
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

void insertAtBeginning(int data)
{
	struct node *newNode, *temp;
	
	if(head == NULL)
	{
		printf("List is Empty");
	}
	else
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		newNode->data = data;
		newNode->next = head;
		
		temp = head;
		while(temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		head = newNode;
	}
}

void insertAtN(int data, int position)
{
	struct node *newNode, *temp;
	
	if(head == NULL)
	{
		printf("List is Empty");
	}
	else if(position == 1)
    {
        insertAtBeginning(data);
    }
	else
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		newNode->data = data;
		
		temp = head;
		for(int i=2;i<=position-1;i++)
		{
			temp = temp->next;
		}
		
		newNode->next = temp->next;
		temp->next = newNode;
	}
}
