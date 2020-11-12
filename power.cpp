#include<iostream>
using namespace std;

int pow(int a,int b){
	int power=1;
	if(b==0){
		return 1;
	}
	 power=pow(a,b-1)*a;
	 return power;
}
 int main(){
 	int a,b;
 	cin>>a>>b;
 	cout<<pow(a,b);
 	return 0;
 }