#include<iostream>
using namespace std;

int main(){
	int arr[] = {10,20,30,40,50,60,70};
	int n  = sizeof(arr) / sizeof(int);
	int i  =0 ;
	int j = n-1;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	
	return 0;
}