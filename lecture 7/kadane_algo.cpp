#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int main(){
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr)/sizeof(int);
	int maxSum = INT_MIN;
	//Brute Force
	/*for(int i = 0;i<n;i++)
	{
		for(int j = i;j<n;j++){
			int sumsofar = 0;
			for(int k = i;k<=j;k++){
				sumsofar+=arr[k];
			}
			maxSum = max(sumsofar,maxSum);

			cout<<endl;
		}
		cout<<endl;
	}*/
	//Kadane's algo 
	int sumSoFar = 0;

	for(int i = 0;i<n;i++){
		sumSoFar += arr[i];
		if(sumSoFar<0){
			sumSoFar = 0;
		}
		maxSum = max(sumSoFar,maxSum);
	}

	cout<<maxSum;
}