#include<stdio.h>
#include<stdlib.h>

void printarray(int arr[], int n);


// Function to sort the array of 0s, 1s and 2s
void sortarr(int arr[], int n)
{
	int i, ct0=0, ct1=0, ct2=0;
	
	// Count the number of 0s, 1s and 2s in the array 
	for(i=0;i<n;i++)
	{
		switch(arr[i])
		{
			case 0: 
				ct0++;
				break;
			case 1:
				ct1++;
				break;	
			case 2:
				ct2++;
				break;	
		}
	}
	
	i=0;

	
	// Store all the 0s in the beginning 
    while (ct0 > 0) { 
        arr[i++] = 0; 
        ct0--; 
    } 
  
    // Then all the 1s 
    while (ct1 > 0) { 
        arr[i++] = 1; 
        ct1--; 
    } 
  
    // Finally all the 2s 
    while (ct2 > 0) { 
        arr[i++] = 2; 
        ct2--; 
    } 
    printarray(arr, n);
}

void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[] = {1,2,0,0,1,2,0,2,1,1};
	int n = sizeof(arr)/sizeof(int);
	
	sortarr(arr,n);
}
