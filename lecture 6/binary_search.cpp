#include<iostream>
using namespace std;

int main() {
	int arr[]= {10,20,30,40,50,60,70};
	int n= sizeof(arr)/sizeof(int);
	int t=30;

	int s=0;
	int e = n-1;
	while(s<=e){ //(s<=e)
		int m=s+(e-s)/2;//(s+(e-s)>>1);
		if(arr[m]==t) {
			cout<<t<<" found the index "<<m<<endl;
			return 0;
		}	
		else{
			if(arr[m]>t) {
				e=m-1;				
			}
			else{
				s=m+1;
			}	
		}
	}
	cout<<"not found";
}