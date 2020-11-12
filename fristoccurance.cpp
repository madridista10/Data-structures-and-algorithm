#include<iostream>
using namespace std;

int  fristocc(int arr[],int n,int key){
	if(n==0){
		return -1;
	}
	if(arr[0]==key){
        return 0;
	}
	int i=fristocc(arr+1,n-1,key);
	if(i==-1){
		return -1;
	}
	return i+1;
}

int main(){
	int arr[]={1,4,6,5,7,5,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<"frist occurance at "<<fristocc(arr,n,5);
	return 0;
}