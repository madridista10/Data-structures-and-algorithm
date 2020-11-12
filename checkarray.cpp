#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
	if(n==0 or n==1){
		return true;
	}
	if(arr[0]<arr[1] and sorted(arr+1,n-1)){
		return true;
	}
	return false;
}

int main(){
	int arr[]={1,4,6,55,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<sorted(arr,n);//if 1 then true and if 0 then false.
	return 0;
}