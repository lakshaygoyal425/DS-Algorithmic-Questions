#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*head, *last;

void createList(int n);
void displayfromfirst();
void displayfromlast();

int main()
{
	int n, choice;
	
	head = NULL;
	last = NULL;
	
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	
	createList(n);
	
	printf("\nPress 1 to display list from First: ");
    printf("\nPress 2 to display list from End : \n");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayfromfirst();
    }
    else if(choice == 2)
    {
        displayfromlast();
    }

}

void createList(int n)
{
	int i, data;
	struct node *newNode;
	
	if(n>=1)
	{
		head = (struct node *)malloc(sizeof(struct node));
		if(head != NULL)
		{
			printf("Enter data of 1 node: \n");
			scanf("%d",&data);
			
			head->data = data;
			head->next = NULL;
			head->prev = NULL;
			
			last = head;
			
			for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; // Link new node with the previous node
                    newNode->next = NULL;

                    last->next = newNode; // Link previous node with the new node
                    last = newNode;          // Make new node as last/previous node
                }
                else
                {
                    printf("Unable to allocate memory.");
                    break;
                }
		}
		}
		else
        {
            printf("Unable to allocate memory");
        }
	}
}

void displayfromfirst()
{
	struct node *temp;
	if(head == NULL){
		printf("List is Empty:");
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

void displayfromlast()
{
	struct node *temp;
	if(head == NULL){
		printf("List is Empty:");
	}
	else
	{
		temp = last;
		while(temp != NULL)
		{
			printf("Data: %d\n",temp->data);
			temp = temp->prev;
		}
	}
}
