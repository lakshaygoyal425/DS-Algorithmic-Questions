#include<bits/stdc++.h>
using namespace std;


int SelectionSort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}


int main()
{
	int arr[] = {15, 36, 7, 38, 10, 20, 68};
	int n = sizeof(arr)/sizeof(arr[0]);
	SelectionSort(arr, n);	
	for(int i = 0;i < n; i++){
	    cout<<arr[i]<<" ";
	}
}
