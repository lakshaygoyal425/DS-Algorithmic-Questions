#include<stdio.h>

int findxink(int arr[], int x, int k, int n)
{
	int i=0;
	for(i=0;i<n;i=i+k)
	{
		// Search x in segment starting 
        // from index i. 
		int j;
		for(j=0;j<k;j++)
		{
			if(arr[i+j] == x)
				break;
		}
		
		// If loop didn't break 
		if(j==k)
			return false;
	}
	
	if(i==n)
		return true;
}



int main()
{
	int arr[] = {4, 6, 3, 5, 10, 4, 2, 8, 4, 12, 13, 4 }; 
    int x = 4, k = 3; 
	int n = sizeof(arr)/sizeof(int);
	
	if(findxink(arr, x, k, n))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
