#include<stdio.h>

int main()
{
	int i, n;
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
	printf("\nReverse Array is : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}
