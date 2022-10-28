#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int a){
	int  i = 2;
	while(i<sqrt(a)){
		if(a%i==0){
			return false;
		}
		i++;
	}
	return true;
}

void printNPrime(int n){
	int i = 2;
	int j = 0;
	while(true){
		if(checkPrime(i)){
			cout<<i<<endl;
			j++;
		}
		if(j>=n){
			return;
		}
		i++;
	}
}

int main(){
	int n ;
	cin>>n;
	printNPrime(n);
	
}