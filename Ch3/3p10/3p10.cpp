#include<iostream>
#include<string>
using namespace std;

class invoice{
	private:
		string part_no,part_des;
		int item_quan,price_per_item,total_amount;
		double VAT,discount_rate;
	
	public:
	invoice(string a,string b,int c,int d){
		part_no=a;
		part_des=b;
		item_quan=c;
		price_per_item=d;
		VAT=0.20;
		discount_rate=0;
		cout<<"Part numner \t"<<"Description \t"<<"Quantity \t"<<"Price per item \t"<<endl;
	}
	get_part_no(){
		cout<<part_no<<"\t\t";
	}
	get_part_des(){
		cout<<part_des<<"\t";
	}
	get_item_quantity(){
		cout<<item_quan<<"\t\t";
	}
	get_price_per_item(){
		cout<<price_per_item<<"\t \n\n";
	}
	getInvoiceAmount(){
		total_amount=(item_quan*price_per_item)+(VAT*(item_quan*price_per_item))+discount_rate;
		cout<<"Total amount is "<<total_amount;
	}

};

