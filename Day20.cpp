// Find the square of a number without using multiplication and division operator
#include<iostream>
using namespace std;
int findSquare(int num)
{
	int odd=1;
	int sq=0;
	num=abs(num);
	while (num-->0){
		sq=sq+odd;
		odd=odd+2;
	}
	
	return sq;
}
int main()
{
	cout<<findSquare(8);
	return 0;
}
