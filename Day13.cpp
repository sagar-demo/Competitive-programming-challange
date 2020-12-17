// 5th graders Kara and Rani  both have lemonade 
// stands.Kara sells her lemonade at 5 cents a glass
// and Rani sells hers at 7 cents a glass.Kara sold k number of glasses
// of lemonade today and Rani solds r number of glasses.who made the most money and by what amount?
// K and r are user-entered value

#include<iostream>
using namespace std;

int main()
{
    int karaGlassCount;
    int raniGlassCount;

    int karaGlassRate=5;
    int raniGlassRate=7;

    cout<<"Enter kara's Glass Count...\n";
    cin>>karaGlassCount;
    cout<<"Enter Rani's Glass count...\n";
    cin>>raniGlassCount;

    int karaTotalMoney=karaGlassCount*karaGlassRate;
    int raniTotalMoney=raniGlassCount*raniGlassRate;

    if (karaTotalMoney>raniTotalMoney){
        cout<<"kara: "<<karaTotalMoney<<"cents";
    }
    else if(karaTotalMoney<raniTotalMoney){
        cout<<"Rani: "<<raniTotalMoney<<"cents";
    }
    else if(karaTotalMoney==raniTotalMoney)
    {
        cout<<"Kara and Rani's money is equal";
    }

    return 0;
}