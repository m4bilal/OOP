#include<iostream>
#include"3p9.cpp"
#include<string>
using namespace std;

int main(){
	int a;
	Account draw(2500);
	draw.get_bal();
	cout<<"Enter amount you want to withdraw ";
	cin>>a;
	draw.withdraw(a);
	draw.curr_bal();
}
