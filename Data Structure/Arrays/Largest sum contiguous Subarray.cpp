#include<stdio.h>

int largestsum(int arr[], int n)
{
	int max = 0;
	int max_end = 0;
	
	for(int i=0;i<n;i++)
	{
		max_end = max_end + arr[i];
		if(max_end<0)
		{
			max_end = 0;
		}
		
		if(max<max_end)
		{
			max = max_end;
		}
	}
	return max;
}

int main()
{
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(arr)/sizeof(int);
	
	int max_sum = largestsum(arr, n);
	
	printf("Sum of contigous array: %d\n",max_sum);
}
