#include<stdio.h>

void occurence(int arr[], int n, int x)
{
	int i;
	int temp = 0;
	for(i=0;i<n;i++)
	{
		if(arr[i] == x)
		{
			temp++;
		}
	}
	
	printf("%d",temp);
	
}

int main()
{
	int arr[] = {0,4,3,5,5,2,5};
	int n = sizeof(arr)/sizeof(int);
	int x = 5;
	occurence(arr, n, x);
}
