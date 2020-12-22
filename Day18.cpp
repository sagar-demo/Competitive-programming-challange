//Lefty keep track of the length of each fish that he catches.below are the length in inches of the fish that fish that he caught one day
// 13,13,8,10,17 what is the largest first length that Lefty caught that day?
// solve without using conditional statements and the loop
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int fishLengthArr[]={12,13,8,10,17};
	int arrayLength=sizeof(fishLengthArr)/sizeof(fishLengthArr[0]);
	sort(fishLengthArr,fishLengthArr+arrayLength);
	int largestFishSize=fishLengthArr[(arrayLength-1)];
	cout<<"Largest fish size = "<<largestFishSize;
	return 0;
}

