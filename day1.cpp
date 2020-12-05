// Day 1. There was a teacher in a small town who loves coding and he wants to create
//a program which prints out the whole mutliplication table of an entered number for his students.                   
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for (int i =1; i<=10; ++i)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}