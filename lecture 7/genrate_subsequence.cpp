#include<iostream>
using namespace std;

int main(){
	int arr[] = {10,20,30,40,50};
	int n  = sizeof(arr)/sizeof(int);

	for(int i =0;i<(1<<n);i++){
		for(int k = 0;k<=i;k++){
			if((i<<k)&1){
				cout<<arr[k]<<" ";
			}
		}
	}
}