// Jack bought  400 hot dogs for the school picnic .if they were contained in package of 8 hot dogs.how many totoal packages did he buy? create a c++ program without using \ or %  operator

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
