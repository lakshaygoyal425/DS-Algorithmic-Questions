#include<stdio.h>

int getmissing(int arr[], int n)
{
	int i, total;
	total = n*(n+1)/2;
	for(i=0;i<n;i++)
	{
		total = total - arr[i];
	}
	return total;
}

int main()
{
	int arr[] = {1, 2, 3, 5};
	int miss = getmissing(arr, 5);
	printf("%d",miss);
}
