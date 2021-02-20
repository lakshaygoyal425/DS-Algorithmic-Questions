#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int m, int n, int arr1[], int arr2[])
{
	int i = m-1;
	int j = 0;
	while(i>=0 && j<n)
	{
		if(arr1[i] >= arr2[j])
		{
			swap(arr1[i], arr2[j]);
			i--, j++;
		}
		else
			break;
	}
	
	sort(arr1, arr1+m);
	sort(arr2, arr2+n);
	
	for(int i=0;i<m;i++)
		cout <<arr1[i] << " ";
	
	for(int j=0;j<n;j++)	
		cout <<arr2[j] << " ";
		
	cout << "\n";		
}

int main()
{
	int arr1[] = {1, 2 ,5, 7};
	int arr2[] = {3, 4, 6};
	
	int m = sizeof(arr1)/sizeof(int);
	int n = sizeof(arr2)/sizeof(int);
	
	merge(m, n, arr1, arr2);
}
