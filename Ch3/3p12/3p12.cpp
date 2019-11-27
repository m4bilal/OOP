#include<iostream>
#include<string>
using namespace std;

class Date{
	private:
		int day,month,year;
	public:
		Date(int d,int m, int y){
			day=d;
			month=m;
			year=y;	
		}
		get_month(){
			if(month>12 || month<1){
				month=1;
			}
			cout<<month<<"/";
		}
		get_day(){
			cout<<day<<"/";
		}
		get_year(){
			cout<<year;
		}
		displayDate(){
			get_day();
			get_month();
			get_year();
		}
};


