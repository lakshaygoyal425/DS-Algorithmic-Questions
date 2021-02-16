#include<stdio.h>
#include<stdlib.h>

void moveinteger(int arr[], int n)
{
	int i,j=0,temp;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
	}
	
	printf("Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[] = {2,4,6,-1,-1,4,-6,3,-11};
	int n = sizeof(arr)/sizeof(int);
	
	moveinteger(arr, n);
}
