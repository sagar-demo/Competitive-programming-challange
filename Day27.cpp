// Write a c++ program to input centimeter and covert to inch,meter and kilometer.
#include<iostream>
using namespace std;
int main()
{
	double INCH=0.394;
	double METER=0.01;
	double KILOMETER=0.00001;
	double cm;
	
	cout<<"Enter length in centimeters :";
	cin>>cm;
	
	double inch=cm*INCH;
	double m=cm*METER;
	double km=cm*KILOMETER;
	
	cout<<cm<<"cm is equal to "<<inch<<"inches."<<endl;
	cout<<cm<<"cm is equal to"<<m<<"meter"<<endl;
	cout<<cm<<"cm is equal to"<<km<<"kilometers."<<endl;
	return 0;

}
