// Mr Richard tupper is purchasing gifts for his family.so far he has purchased the folllowing :
// 3 sweaters,each valued at 65$ 
// 1 computer game valued at $75
// 2 brackets,each valued at $43
// later,he reutunrd one of the bracelets for a full refund and recevied a $10 rebate on the computer game,what is the total cost of the gifts after the refund and rebate ?
// calculate part of the program should be under three line


#include<iostream>
using namespace std;
int main()
{
int sweaterPrice=68;
int sweaterCount=3;
int ComputerGamePrice=75;
int ComputerGameCount=1;
int braceletPrice=43;
int braceletCount=2;

// Discount And Rebate
int returnedBraceleteCount=1;
int rebateOnComputerGame=10;


//Calculation part


int totalGiftPrice=(sweaterPrice*sweaterCount)+(ComputerGamePrice*ComputerGameCount)+(braceletPrice*braceletCount);
int discountAndRebate=(braceletPrice*returnedBraceleteCount)+rebateOnComputerGame;
int finalGiftPrice=totalGiftPrice-discountAndRebate;
cout<<"final gift price is "<<finalGiftPrice;
 return 0;

}