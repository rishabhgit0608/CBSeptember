#include<iostream>
using namespace std;

int main(){
	int arr[7] = {10,20,30,40,50,60,70};
	int n  = sizeof(arr) / sizeof(int);
	int temp = arr[n-1];
	for(int i = n-2;i>=0;i--){
		arr[i+1] = arr[i];
	}
	arr[0]=temp;
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}