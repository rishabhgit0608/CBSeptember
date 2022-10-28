// best approach
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	int left[n];
	int right[n];
	left[0] = 1;
	right[n-1] = 1;

	for(int i = 1;i<n;i++){
		left[i] = left[i-1] * arr[i-1];
		right[n-i-1] = right[n-i] * arr[n-i]; 
	}
	int ans[n];
	for(int i = 0;i<n;i++){
		ans[i] = left[i] * right[i];
		cout<<ans[i]<<" ";
	}

}
