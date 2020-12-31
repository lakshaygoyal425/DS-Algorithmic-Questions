#include<stdio.h>
#include<stdlib.h>

void move(int arr[], int n)
{
	int temp[n];
	int i,j=0;
	
	//Store +ve elements in array
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			temp[j++] = arr[i];	
		}
	}
	
	//Store -ve elements in array
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			temp[j++] = arr[i];
		}
	}
	
	//Copying array to arr
	for(i=0;i<n;i++)
	{
		arr[i] = temp[i];
	}
}

int main()
{
	int arr[] = {2,4,-1,2,-4,5,-6,-7,3,2,4,-5};
	int n = sizeof(arr)/sizeof(int);
	
	move(arr, n);
	int i;
	printf("Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
