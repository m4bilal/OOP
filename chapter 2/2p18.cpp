#include <iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter first number ";
  cin>>a;
  cout<<"Enter second number ";
  cin>>b;
  
  if(a==b){
  	cout<<"Numbers are equal"<<endl;
  }else{
  	cout<<"Numbers are not equal "<<endl;
  }
  
  if(a!=b){
  	if(a<b){
	  	cout<<"a is smaller ";
	  }else{
	  	cout<<"b is smaller ";
	  }
  }
  
}
