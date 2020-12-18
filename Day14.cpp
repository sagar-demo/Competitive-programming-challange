#include<bits/stdc++.h>
using namespace std;

void printAll(string a[],int n){
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void allCombination(string a[],int n)
{
    sort(a,a+n);
    cout<<"Possible combinations:\n";
    do{
        printAll(a,n);
    }while(next_permutation(a,a+n));

}
int main()
{
    string studentArray[]={
        "Ram","Anju","Deepak","Ravi"
    };
    int n=sizeof(studentArray)/sizeof(studentArray[0]);
    allCombination(studentArray,n);
    return 0;
}