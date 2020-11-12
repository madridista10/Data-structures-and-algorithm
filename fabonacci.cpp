#include<iostream>
using namespace std;

//fabonacci function
int fab(int n){
	if(n==0 or n==1){
		return n;
	}
	return fab(n-1)+fab(n-2);
}

//main program
int main(){
	int n;
	cin>>n;
	cout<<fab(n);
	return 0;
}