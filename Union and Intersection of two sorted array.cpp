#include<stdio.h>

unionarray(int arr1[], int arr2[], int m, int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
		{
			printf(" %d ",arr1[i++]);
		}
		else if(arr2[j]<arr1[i])
		{
			printf(" %d ",arr2[j++]);
		}
		else
		{
			printf(" %d ",arr2[j++]);
			i++;
		}
	}
	
	while(i<m)
	{
		printf(" %d ",arr1[i++]);
	}
	while(j<n)
	{
		printf(" %d ",arr2[j++]);
	}
}
intersection(int arr1[], int arr2[], int m, int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr2[j]<arr1[i])
		{
			j++;
		}
		else
		{
			printf("\n %d ",arr2[j++]);
			i++;
		}
	}
}

int main()
{
	int arr1[] = {1,2,3,4,6,7};
	int arr2[] = {4,7,8};
	int m = sizeof(arr1)/sizeof(int);
	int n = sizeof(arr2)/sizeof(int);

	unionarray(arr1,arr2,m,n);
	intersection(arr1,arr2,m,n);
}
