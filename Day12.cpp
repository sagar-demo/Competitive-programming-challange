#include<iostream>
using namespace std;
int greatestCommonFactor(int WhiteC,int RedC)
{
    return(RedC==0)?WhiteC:greatestCommonFactor(RedC,WhiteC%RedC);
}
int main()
{
int redCorpuscles=5000000;
int whiteCorpuscles=8000;

int factor=greatestCommonFactor(whiteCorpuscles,redCorpuscles);



int whiteRatio=whiteCorpuscles/factor;
int redRatio=redCorpuscles/factor;



cout<<"Aspect Ratio "<<whiteRatio<<""<<redRatio;




    return 0;
}