#include<iostream>
using namespace std;
void myswap(int& a,int& b){
	int temp = a;
	a = b;
	b= temp;
}
int main(){
	int a = 10;
	int b = 11;
	cout<<a<<" "<<b<<endl;
	myswap(a,b);
	cout<<a<<" "<<b;
}