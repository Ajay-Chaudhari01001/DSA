// w.a.p. to find missing element in sorted array...
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,6};
    // intialize with 0 index
    int xor1 = arr[0];

    for(int i=1; i<5; i++){

        xor1 = xor1^arr[i];
    }
    int xor2 = 1;
    // find missing element in array and xor method
    for(int i=2; i<=6; i++){

        xor2 = xor1^i;
    }
    cout<<"Missing Element in Array = "<<xor2<<endl;
    return 0;
}