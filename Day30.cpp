//Write a c++ program that accepts two integers from the user and then prints the sum.the difference,the product,the average,the maximum(the larger of the two integers) and the minimum(smaller of the two integers).
#include<iostream>
using namespace std;
int main()
{
	int Firstint;
	int secondint;
	printf("input 1st integer: ");
	cin>>Firstint;
	printf("input 2nd integer: ");
	cin>>secondint;
	
	printf("Sum of two integers: %d\n",Firstint+secondint);
	printf("Difference of two integers: %d \n",Firstint-secondint);
	printf("Product of two integers: %d \n",Firstint*secondint);
	
	printf("Average of two integers: %f\n",(double)(Firstint+secondint)/2);
	printf("Max integer: %d \n",max(Firstint,secondint));
	printf("Min integer: %d \n",min(Firstint,secondint));
	return 0;
}
