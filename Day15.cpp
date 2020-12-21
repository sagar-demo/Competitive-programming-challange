// Day15 Lucille spent 12% of her weekly earnings on,Dvd's and deposited the rest her savings account.if she spent 42$ on DvD's how much did she deposite into her saving money account?

#include<iostream>
using namespace std;

int main()
{
    float spentOnDvd=42.0f;
    float percentageOfTotalEarning=12.0f;
    float totalEarning=(spentOnDvd*100)/percentageOfTotalEarning;
    float totalSaving=totalEarning-spentOnDvd;
    cout<<"Deposit in saving Account: $"<<totalSaving;
    

    return 0;
}