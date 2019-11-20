#include <iostream>
using namespace std;

int main(){
	int a,remainder,reversedNumber;
	reversedNumber=0;
	cout<<"Enter 4 digit number ";
	cin>>a;
	 while(a != 0)
    {
        remainder = a%10;
        reversedNumber = reversedNumber*10 + remainder;
        a /= 10;
    }
    cout << "Reversed Number = " << reversedNumber;
    return 0;
}
