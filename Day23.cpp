#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number";
	cin>>n;
	int binaryNum[32];
	int i=0;
	while(n>0){
		binaryNum[i]=n%2;
		n=n/2;
		i++;
		
	}
	cout<<"Binary is ";
	for (int j=i-1;j>=0;j--)
	cout<<binaryNum[i];
	return 0;
}
