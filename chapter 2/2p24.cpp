#include <iostream>
using namespace std;

int main(){
	int a,b,sum;
	cout<<"Enter first number ";
	cin>>a;
	cout<<"Enter second number ";
	cin>>b;
	sum=a+b;
	if(sum%2==0){
		cout<<"Number is even ";
	}else{
		cout<<"Number is odd ";
	}
}
