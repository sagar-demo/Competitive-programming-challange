// Dave is 13,772,160 minutes old in age can you calculate his age in year.
#include<iostream>
using namespace std;
int main()
{
	int minutesinYear=60*24*365;
	int min =13772160;
	int years=(min/minutesinYear);
	cout<<"Dave is "<< years<<" Years old ";
	return 0;
}
