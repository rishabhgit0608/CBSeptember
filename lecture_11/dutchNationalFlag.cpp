#include<iostream>
using namespace std;

void dutchNationalFlag(int arr[],int n){
	int left = 0;
	int mid = 0;
	int right = n-1;
	while(mid<=right){
		if(arr[mid] == 0){
			swap(arr[mid],arr[left]);
			left++;mid++;
		}
		else if (arr[mid] == 1)
		{
			mid++;
		}
		else{
			swap(arr[mid],arr[right]);
			right--;
		}
	}
}

int main(){
	int arr[] = {0,0,2,2,1,1}; 
	dutchNationalFlag(arr,6);
	for(int i = 0 ;i<6;i++){
		cout<<arr[i]<<" ";
	}
}