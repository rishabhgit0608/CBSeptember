#include<iostream>
#include<climits>
using namespace std;
#include <bits/stdc++.h>

int main(){
	int n ;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int target ;
	cin>>target;
	int lo = 0;
	int hi = n-1;
	if(lo==hi){
		cout<<0;
		return 0;
	}
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		if(arr[mid] == target){
			cout<<mid;
			return 0;
		}
		else if(arr[mid]>=arr[lo]){
			if(arr[mid]>target && target>=arr[lo]){
				hi = mid-1;
			}
			else{
				lo=mid+1;
			}
		}
		else{
			if(arr[hi]>target && arr[mid]<=target){
				lo = mid+1;
			}
			else{
				hi = mid-1;
			}
		}

	}
	cout<<-1;
	return 0;
}