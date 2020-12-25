// write a program that for a given hour and minutes values calculates angles in degrees between the hour and the minute hands.check whether the minute hand overlapping the hour hand at the a given time.

#include<iostream>
using namespace std;
int min(int x,int y)
{
	return (x<y)?x:y;
}
int calAngle(double h,double m)
{
	if(h<0 ||m<0|| h>12|| m>60)
	printf("wrong input");
	
	if (h==12)h=0;
	if(m==60)m=0;
	
	int hour_angle=0.5*(h*60+m);
	int minute_angle=6*m;
	
	int angle=abs(hour_angle-minute_angle);
	angle=min(360-angle,angle);
	return angle;
}
int main()
{
	int hour;
	int minute;
	cout<<"enter minute (0-12)..";
	cin>>hour;
	cout<<"Enter minute (0-59)...";
	cin>>minute;
	int clockAngle=calAngle(hour,minute);
	if (clockAngle==0){
		cout<<"hour and minute hands overlaps";
	}
	else{
		cout<<clockAngle<<"degree";
	}
	return 0;
}
