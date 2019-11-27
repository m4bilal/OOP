#include<iostream>
#include<string>
using namespace std;

class List{
	private:
		unsigned int account_no;
		string f_name,s_name;
		double balance;
	public:
		List(unsigned int a, string b, string c,double e){
			account_no=a;
			f_name=b;
			s_name=c;
			balance=e;
		}
		new_member(){
			cout<<"Account Number: "<<account_no<<"\nFirst Name "<<f_name<<"\nSecond name "<<s_name<<"\nBalance "<<balance;
		}
};


