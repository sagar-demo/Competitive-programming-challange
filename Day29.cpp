//Day 29. write a program to takes the user for a distance (in meters) and 
//the time was taken(as three numbers hours,minutes seconds),and display the speed.in miles per hours.
#include<iostream>
using namespace std;
int main()
{
	float timeSeconds;
	float kph,mph;
	
	float distance;
	float hr;
	float min;
	float sec;
	cout<<"Input distance in meters :";
	cin>>distance;
	
	
	cout<<"input hour :";
	cin>>hr;
	
	cout<<"Input seconds: ";
	cin>>sec;
	
	timeSeconds=(hr*3600)+(min*60)+sec;
	kph=(distance/1000.0f)/(timeSeconds/3600.0f);
	mph=kph/1.609f;
	cout<<"YOur speed in miles/h is "<<mph;
	return 0;
}
