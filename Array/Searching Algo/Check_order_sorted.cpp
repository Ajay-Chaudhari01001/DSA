// check the order to sorted array is accesseding or desscending order..
#include<iostream>
using namespace std;

void checkOrder(int arr[], int size){

    if(arr[0]>arr[1])
        cout<<"Array is sorted in Descending Order .."<<endl;
    else
        cout<<"Array are sorted in Ascending order..."<<endl;
}
int main(){

    int a[]={10,8,6,5,3,1};
    checkOrder(a, 6);

    return 0;
}