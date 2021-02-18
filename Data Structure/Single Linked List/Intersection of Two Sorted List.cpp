#include <stdio.h>
#include <stdlib.h>
 
// A Linked List node
struct node
{
    int data;
    struct node* next;
};
 
// Helper function to print a given linked list
void display(struct node* head)
{
    struct node* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}
 
// Helper function to insert a new node at the beginning of the linked list
void createList(struct node** head, int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}
 
// Compute a new sorted list representing the intersection
// of the two given sorted lists without using a dummy node
struct node* sortedIntersect(struct node* a, struct node* b)
{
    struct node *head = NULL;
    struct node* temp = NULL;
 
    // once one or the other list runs out —— we're done
    while (a != NULL && b != NULL)
    {
        if (a->data == b->data)
        {
            if (head == NULL)
            {
                createList(&head, a->data);
                temp=head;
            }
            else
            {
                createList(&temp->next, a->data);
                temp=temp->next;
            }
 
            a = a->next;
            b = b->next;
        }
 
        // advance the smaller list
        else if (a->data < b->data)
            a = a->next;
        else
            b = b->next;
    }
    return head;
}
 
int main(void)
{
    // input keys
    int list1[] = {1, 4, 7, 10 };
	int list2[] = {2, 4, 6, 8, 10 };
    int m = sizeof(list1)/sizeof(list1[0]);
 	int n = sizeof(list2)/sizeof(list2[0]);
 	
    struct node *a = NULL;
    for (int i = m - 1; i >=0; i = i - 1) {
        createList(&a, list1[i]);
    }
 
    struct node *b = NULL;
    for (int i = n - 1; i >=0; i = i - 1) {
        createList(&b, list2[i]);
    }
 
    // print both lists
    printf("First List: ");
    display(a);
 
    printf("Second List: ");
    display(b);
 
    struct node *head = sortedIntersect(a, b);
 
    printf("\nAfter Intersection: ");
    display(head);
 
    return 0;
}
