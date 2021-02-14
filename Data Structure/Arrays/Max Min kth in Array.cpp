#include<stdio.h>

int main()
{
	int i, j, n;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	/*
	printf("Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	*/
	
	// Bubble Sort 
	int swap;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
	
	
	printf("Sorted Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	
	int k;
	printf("Enter the Kth number: ");
	scanf("%d",&k);
	
	printf("Kth Min number: %d\n",arr[k-1]);
	printf("Kth Max number: %d",arr[n-k]);
	
	
}

