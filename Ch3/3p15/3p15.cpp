#include<iostream>
#include<string>
using namespace std;

class HeartRates{
private:
    string firstname;
    string lastname;
    int day,month,year,Age,maxh;
    float fifty,eighty;
public:
    HeartRates(string fname,string lname,int d,int m,int y){
        firstname=fname;
        lastname=lname;
        day=d;
        month=m;
        year=y;
        getfirstname();
        getlastname();
        age();
        maxheartrate();
        targetheartrate();
    }
    getfirstname(){
        cout<<"Your First Name is:"<<firstname<<"\n";
    }
    getlastname(){
        cout<<"Your Second Name is:"<<lastname<<"\n";
    }
    getDOB(){
        cout<<"Your Date of Birth is:"<<day<<"//"<<month<<"//"<<year<<"\n";
    }
    setfirstname(string a){
        firstname=a;
    }
    setlastname(string a){
        lastname=a;
    }
    setdob(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    age(){
        Age=2019-year;
        cout<<"Age in Years="<<Age<<"\n";
    }
    maxheartrate(){
        maxh=220-Age;
        cout<<"Maximum HeartRate is: "<<maxh<<"\n";
    }
    targetheartrate(){
        fifty=maxh*.5;
        eighty=maxh*.8;
        cout<<"Your Target HeartRate is 50%-80%: "<<fifty<<" to "<<eighty<<"\n";
    }
    
};


