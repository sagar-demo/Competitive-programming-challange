// During the last week of track training,Shoshanna  achieves the following times in sec-rounds :66,57,54,53,64,52 and 59.Found her best score use bubble sort

#include<iostream>
using namespace std;
void swap(int *xp ,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
// A function to implement bubble sort
void bubblesort(int arr[],int n)
{
    int i , j;
    for (i=0;i<n-1;i++)
    /// Last i elements are already in place
    for(j=0;j<n-i-1;j++)
     if(arr[j]>arr[j+1])
     swap(&arr[j],&arr[j+1]);

}
// function to print an array
void PrintArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
//Driver code
int main()
{
     int arr[]={66,57,54,53,64,52,59};
     int n=sizeof(arr)/sizeof(arr[0]);
     bubblesort(arr,n);
     cout<<"Sorted array\n";
     PrintArray(arr,n);
     return 0;
}