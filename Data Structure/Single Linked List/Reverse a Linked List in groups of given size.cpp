// C program to reverse a linked list in groups of given size
#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
	int data;
	struct node* next;
};

/* Reverses the linked list in groups of size k and returns the 
pointer to the new head node. */
struct node *reverse (struct node *head, int k)
{
	if (!head)
		return NULL;

	struct node* current = head;
	struct node* next = NULL;
	struct node* prev = NULL;
	int count = 0; 

	
	
	/*reverse first k nodes of the linked list */
	while (current != NULL && count < k)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}
	
	/* next is now a pointer to (k+1)th node 
	Recursively call for the list starting from current.
	And make rest of the list as next of first node */
	if (next != NULL)
	head->next = reverse(next, k); 

	/* prev is new head of the input list */
	return prev;
}

/* UTILITY FUNCTIONS */
/* Function to createList a node */
void createList(struct node** head, int new_data)
{
	/* allocate node */
	struct node* new_node =
			(struct node*) malloc(sizeof(struct node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head); 

	/* move the head to point to the new node */
	(*head) = new_node;
}

/* Function to print linked list */
void printList(struct node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
} 

/* Driver code*/
int main(void)
{
	/* Start with the empty list */
	struct node* head = NULL;

	/* Created Linked list is 1->2->3->4->5->6->7->8->9 */
	createList(&head, 9);
	createList(&head, 8);
	createList(&head, 7);
	createList(&head, 6);
	createList(&head, 5);
	createList(&head, 4);
	createList(&head, 3);
	createList(&head, 2);
	createList(&head, 1);		 

	printf("\nGiven linked list \n");
	printList(head);
	head = reverse(head, 3);

	printf("\nReversed Linked list \n");
	printList(head);

	return(0);
}

