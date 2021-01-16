#include<stdio.h>

void bubblesort(int arr[], int n)
{
	int i, j, temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	// Print the Array
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {2,4,5,2,4,5,4,23,21};
	int n = sizeof(arr)/sizeof(int);
	
	bubblesort(arr, n);
}
