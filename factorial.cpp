#include<iostream>
using namespace std;

//factorial function
int fact(int n){
	if(n==0 or n==1){
		return 1;
	}
	return n*fact(n-1);
}

//main program
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}