// Write  a c++ program to find it a given year is a leap year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter any Year.";
	std::cin>>year;
	bool flag= false;
	if(year%400==0){
		flag=true;
	}
	else if(year%100==0){
		flag=false;
	}
	else if(year %4==0){
		flag=true;
	}
	if(flag){
		cout<<"Year"<<year<<"is a Leap Year";
	}
	else{
		cout<<"year"<<year<<"is not a Loop year";
	}
	return 0;
}
