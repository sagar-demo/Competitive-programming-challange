#include<iostream>
using namespace std;
int main()
{
int totalHotDog=400;
int totalHotDogPerContainer=8;
int totalContainer=0;
while(totalHotDog>=totalHotDogPerContainer)
{
    totalHotDog-=totalHotDogPerContainer;
    totalContainer +=1;
}
cout<<"jack buy total"<<totalContainer<<"container";

}