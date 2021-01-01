#include<stdio.h>

void rotate(int arr[], int m)
{
	int x = arr[m-1], i;
	for(i=m-1;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = x;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int m = sizeof(arr)/sizeof(int);
	
	printf("Array: \n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",arr[i]);
	}
	
	rotate(arr, m);
	
	printf("\nRotated array is\n"); 
    for (int i = 0; i < m; i++) 
        printf("%d ", arr[i]); 
}
