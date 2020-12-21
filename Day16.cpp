// Day16 write a program to get the sum of n number?
#include<iostream>
using namespace std;

int getSum(int n)
{
 int sum=0;
 while(n!=0)
 {
 	sum=sum+n % 10;
 	n=n/10;
	 }	
	 return sum;
}
int main(){
	int n;
	cout<<"Enter a number..";
	cin>>n;
	int sum=getSum(n);
	cout<<"Sum of "<<n<<"is"<<sum;
	return 0;
}
