#include<bits/stdc++.h>
using namespace std;


int InsertionSort(int arr[], int n){
	for(int i=1;i<n-1;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}


int main()
{
	int arr[] = {15, 36, 7, 38, 10, 20, 68};
	int n = sizeof(arr)/sizeof(arr[0]);
	InsertionSort(arr, n);	
	for(int i = 0;i < n; i++){
	    cout<<arr[i]<<" ";
	}
}
