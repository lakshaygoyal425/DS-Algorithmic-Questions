#include<stdio.h>

int main()
{
	int i, n, max, min;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	
	printf("\nMaximun Element : %d\n", max);
	printf("Minimum Element : %d", min);
}
