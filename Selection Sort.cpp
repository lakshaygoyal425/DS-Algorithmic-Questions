#include<stdio.h>

void selectionsort(int arr[], int n)
{
	int i, j, temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {45,2,6,8,4,3,2,0,445,4};
	int n = sizeof(arr)/sizeof(int);
	
	selectionsort(arr, n);
	printf("\nSorted array is ");
    for (int i = 0; i < n;i++)
        printf(" %d ", arr[i]);
}
