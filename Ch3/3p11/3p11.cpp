#include<iostream>
#include<string>
using namespace std;

class MotorVehicle{
	private:
		string make,fueltype,color;
		int yearOfManufacture,engineCapacity;
	public:
	MotorVehicle(){
		cout<<"Enter company name ";
		cin>>make;
		cout<<"Enter fueltype ";
		cin>>fueltype;
		cout<<"Enter color of car ";
		cin>>color;
		cout<<"Enter year of Manufacture ";
		cin>>yearOfManufacture;
		cout<<"Enter engine capacity ";
		cin>>engineCapacity;
		cout<<"Company \t"<<"Fuel type \t"<<"Color \t"<<"Year \t"<<"Engine capacity \t"<<endl;
	}
	get_make(){
		cout<<make<<"\t\t";
	}
	get_fuel(){
		cout<<fueltype<<"\t\t";
	}
	get_color(){
		cout<<color<<"\t";
	}
	get_year(){
		cout<<yearOfManufacture<<"\t";
	}
	get_engine(){
		cout<<engineCapacity<<"\t\t";
	}
};


