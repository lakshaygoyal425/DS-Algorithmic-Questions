#include<stdio.h>

void mergesort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int mid1, int r);

void mergesort(int arr[], int l, int r)
{
	int mid;
	if(l<r)
	{
		mid = (l+r)/2;
		mergesort(arr, l, mid); // Left Recursion
		mergesort(arr, mid+1, r); // RIght Recusrion
		merge(arr, l, mid, mid+1, r); //Merginng of two sorted 
	}
}

void merge(int arr[], int l, int mid, int mid1, int r){
	int temp[50];
	int i, j, k;
	i = l;  //Beginning of first array
	j = mid1; //Beginning of second array
	k = 0;
	
	while(i<=mid && j<=r)
	{
		if(arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
		}
	}
	
	while(i<=mid)
	{
		temp[k++] = arr[i++];
	}
	
	while(j<=r)
	{
		temp[k++] = arr[j++];
	}
	
	//Transfer elements from temp[] back to a[]
	for(i=l,j=0;i<=r;i++,j++)
	{
		arr[i]=temp[j];	
	}
}

int main()
{
	int arr[] = {3,5,67,3,2,5,6,4,32,2,4,54,4};
	int n = sizeof(arr)/sizeof(int);
	
	mergesort(arr, 0 ,n-1);
	
	printf("\nSorted array is :");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	return 0;
}
