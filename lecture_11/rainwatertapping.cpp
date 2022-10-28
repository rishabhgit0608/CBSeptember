#include<iostream>
#include<climits>

using namespace std;

// int main(){
// 	int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
// 	int n = sizeof(arr)/sizeof(int);
// 	int left[n];
// 	int right[n];
	
// 	for(int i = 0; i < n;i++){
// 		int maximum = arr[i];

// 		for(int j = i-1;j>=0;j--){
// 			maximum = max(arr[j],maximum);
// 		}
// 		left[i]= maximum;
// 		maximum = arr[i];
// 		for(int j = i+1;j<n;j++){
// 			maximum = max(maximum,arr[j]);
// 		}
// 		right[i] = maximum; 
// 	}
// 	int ans=0;
// 	for(int i=0;i<n;i++){
// 		ans+=min(left[i],right[i]) - arr[i];
// 	}
// 	cout<<ans<<endl;
// }


//optimised approach

// int main(){
// 	int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
// 	int n = sizeof(arr)/sizeof(int);
// 	int left[n];
// 	int right[n];
// 	left[0] = arr[0];
// 	right[n-1] = arr[n-1];
// 	for(int i = 1;i<n;i++){
// 		left[i] = max(left[i-1],arr[i]);
// 		right[n-i-1] = max(right[n-i],arr[n-i-1]);
// 	}
// 	int ans = 0;
// 	for(int i = 0;i<n;i++){
// 		ans+=min(left[i],right[i]) - arr[i];
// 	}
// 	cout<<ans<<endl;
// }

// Best approach

int main(){
	int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(arr)/sizeof(int);
	int i = 0;
	int j = n-1;
	int l = 0;
	int r = 0;
	while(i<=j){
		l = max(l,h[i]);
		r = max(r,h[j]);
		if(l<r){
			total += l-arr[i];
			i++;
		}
		else{
			total
		}

	}
}