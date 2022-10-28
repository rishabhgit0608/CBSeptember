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

int main(){
	int a ;
	cin>>a;
	checkPrime(a) == 1?cout<<"true":cout<<"false" ;
}