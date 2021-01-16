#include<stdio.h>

void findRangeAndCoefficient(int arr[], int n)
{
	int i;
	float max = arr[0];
	float min = arr[0];
	
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
	
	printf("Range: %f\n",max-min);
	printf("Coefficient: %f",(max-min)/(max+min));
}

int main()
{
	int arr[] = {15, 16, 10, 9, 6, 7, 17};
	int n = sizeof(arr)/sizeof(int);
	
	findRangeAndCoefficient(arr, n);
}
