#include <iostream>
using namespace std;

int main(){
	int a,b,c,sum,average,product,smallest,largest;
	cout<<"Enter first number ";
	cin>>a;
	cout<<"Enter second number ";
	cin>>b;
	cout<<"Enter third number ";
	cin>>c;
 	sum=a+b+c;
 	average=(a+b+c)/3;
 	product=a*b*c;
 	cout<<"Input three different integers: "<<a<<" "<<b<<" "<<c<<endl;
 	cout<<"Sum is "<<sum<<endl;
 	cout<<"Average is "<<average<<endl;
 	cout<<"Product is "<<product<<endl;
 	if(a<b && a<c){
 		cout<<"Smallest is "<<a<<endl;
	 }else if(b<a && b<c){
	 	cout<<"Smallest is "<<b<<endl;
	 }else{
	 	cout<<"Smallest is "<<c<<endl;
	 }
 	if(a>b && a>c){
 		cout<<"Largest is "<<a;
	 }else if(b>a && b>c){
	 	cout<<"Largest is "<<b;
	 }else{
	 	cout<<"Largest is "<<c;
	 }
}
