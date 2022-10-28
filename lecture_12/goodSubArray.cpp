#include<iostream>
using namespace std;

int main(void){
	int n = 6;
	int arr[] = {1, 6, 5, 2, 4, 3};
	int count = 0;
	// for(int i = 0;i<n;i++){
	// 	for(int j = i;j<n;j++){
	// 		int sum = 0;
	// 		for(int k = i ;k<=j;k++){
	// 			sum += arr[k];
	// 		}
	// 		if(sum%n == 0)
	// 		{
	// 			count++;
	// 		}
	// 	}

	// }
	// cout<<count<<endl;
	/*cumulative sum strategy optimised
	int csum[101];
	csum[0]=0;
	for(int i = 1;i<=n;i++){
		csum[i]=csum[i-1] + arr[i-1];
	}
	// approach - time :O(n^2) : space : O(n)
	for(int i = 0;i<n;i++){
		for(int j = i;j<n;j++){
			int sum = csum[j+1] - csum[i];
			if(sum%n == 0){
				count++;
			}
		}
	}
	cout<<count<<endl;*/
	// best solution
	int freq[n]={};
	freq[0] = 1;
	int csum = 0;
	for(int i = 0 ;i<n;i++){
		csum += arr[i];
		freq[((csum%n)+n)%n]++;
	}

	for(int i = 0;i<n;i++){
		if(freq[i]>=2){
			// it will contribute to the count of good subarrays
			count += freq[i]*(freq[i]-1)/2;
		}
	}
	cout<<count<<endl;
}