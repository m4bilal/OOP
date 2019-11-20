#include <iostream>
using namespace std;

int main(){
	const float pai=3.14159;
	float r,diameter,circ,area;
	cout<<"Enter radius of circle ";
	cin>>r;
	diameter=2*r;
	circ=2*pai*r;
	area=pai*(r*r);
	cout<<"Radius of circle is "<<diameter<<endl;
	cout<<"Circumferece of circle is "<<circ<<endl	;
	cout<<"Area of circle is "<<area;
}
