#include<stdio.h>

void checksum(int arr[], int n, int sum)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] + arr[j] == sum)
			{
				count++;
			}
		}
	}
	
	printf("Count: %d",count);
}

int main()
{
	int arr[] = {1, 5, 7, -1};
	int n = sizeof(arr)/sizeof(int);
	int sum = 6;
	checksum(arr, n, sum);
}
