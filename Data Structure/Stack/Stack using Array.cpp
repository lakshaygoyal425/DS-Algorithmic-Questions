#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#define SIZE 100

int stack[SIZE];

int top = -1;

void push(int element);
int  pop();

int main()
{
	int choice, data;
	while(1){
		printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        
        switch(choice)
        {
        	case 1:
        		printf("Enter Data to Push into stack: ");
        		scanf("%d",&data);
        	
				push(data);
				break;
				
			case 2:		
				data = pop();
				
				if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;
				
			case 3:
				printf("Stack Size: %d\n",top+1);
				break;
				
			case 4:
				printf("Exiting!\n");
				exit(0);
				break;
				
			default:
				printf("Invalid Choice\n");			
		}
		printf("\n\n");
	}
}

void push(int element)
{
	if(top >= SIZE)
	{
		printf("Stack Overflow\n");
		return;
	}
	
	top++;
	stack[top] = element;
	printf("Data Pushed\n");
}

int pop()
{
    if (top < 0)
    {
        printf("Stack is empty.\n");

        return INT_MIN;
    }

    return stack[top--];
}
