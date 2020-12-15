// Dan rented two movies to watch last night.the first was 100 minutes long.how many hours did it 110 min longs.How many hours did it take for Dan to watch the two movies?
#include<iostream>
using namespace std;
int main()
{
    int firstmovieTimeInMinute=100;
    int secondmovieTimeInMinute=110;
    int minutePerHour=60;

    //convert minutes to hours
    float spentTime=(float)
    (firstmovieTimeInMinute+secondmovieTimeInMinute)/minutePerHour;
    cout<<"total hours to watch movies "<<spentTime;
    return 0;
}