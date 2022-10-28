#include<iostream>
using namespace std;

int main(){
	int arr[] = {50,40,10,20,30};
	int n = sizeof(arr)/sizeof(int);

	for(int i =1;i<n;i++){
		//in the ith pass, we have to insert in the unsorted part of the array to its correct position in the sorted part

		int key = arr[i];
		int j = i-1;
		while(j>=0 and arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;

	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}