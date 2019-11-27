#include<iostream>
#include<string>
using namespace std;

class Account{
	private:
		
		string user_nm,user_ps;
		int current_bal,witdraw_bal;
	    
	    public:
	    Account(int a){
	    	cout<<"Enter your user_nm ";
	    	cin>>user_nm;
	    	cout<<"Enter your password ";
	    	cin>>user_ps;
	    	current_bal=a;
		}
		
		get_bal(){
			cout<<"Your current balance is "<<current_bal<<endl;
		}
		withdraw(int a){
			if(a>current_bal){
				cout<<"Withdraw amount is greater then current balance"
				<<" Please try again ";
			}else{
				current_bal=current_bal-a;
				cout<<"You withdraw "<<a<<" amount from your account "<<endl;
			}
		}
		curr_bal(){
			cout<<"Now your current balance is "<<current_bal;
		}
};
