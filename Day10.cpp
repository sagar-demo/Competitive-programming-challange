// Salesperson Rita drives 2052 miles in 6 days ,stopping at 2 towns each day.
// How many kilometers does she average between stops?
#include<iostream>
using namespace std;
int main()
{
    int totalMilesToDrive=2052;
    int totalDays=6;
    int townToStopPerDay=2;
    float kmPerMile=1.60934;

    float avgMiles=(totalMilesToDrive/totalDays)/townToStopPerDay;

    //convert miles to km
    float avgKM=avgMiles*kmPerMile;
    printf("She drive average of %f km between every stop",avgKM);
    return 0;

}