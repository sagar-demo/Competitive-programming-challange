// On a certain day,the nurses at a hospital worked the following number of hours:Nurse Howard worked 8 hours;Nurse Pease worked 10 hours;Nurse compbell worked 9 hours;
// Nurse Grace worked 8 hours;Nurse McCarthy worked 7 hours,and Nurse Murphy worked 12 hours .what is the average number of hours worked per nurse on this day?
// Average should be as a float value..

#include<iostream>
using namespace std;
int main()
{
    double NurseHoward=8;
    double NursePease =10;
    double NurseCampbell=9;
    double NurseGrace=8;
    double NurseMcCarthy=7;
    double NurseMurphy=12;
    double Totalaverage;

    Totalaverage=NurseHoward+NursePease+NurseCampbell+NurseGrace+NurseMcCarthy+NurseMurphy;
    cout<<"The average number of hours worked per nurse on the day is: "<<Totalaverage/6;

    return 0;

}