#include<iostream>
#include"3p10.cpp"
#include<string>
using namespace std;

int main(){
	invoice obj("01","2 keyboards",3,20);
	obj.get_part_no();
	obj.get_part_des();
	obj.get_item_quantity();
	obj.get_price_per_item();
	obj.getInvoiceAmount();
}
