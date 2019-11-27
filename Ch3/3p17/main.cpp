#include<iostream>
#include"3p17.cpp"
#include<string>
using namespace std;

int main()
{
    double amount;
    cout<<"Amount of Tanzanian Shillings: ";
    cin>>amount;
    Electric_bill eb(amount);
    eb.output();
    return 0;
}
