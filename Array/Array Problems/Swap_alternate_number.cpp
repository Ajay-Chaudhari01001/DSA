// swapping a alternate number...
#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i+2){

            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i] = temp;
    }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int A[8] = {23, 34, 45, 56, 34, 55, 23, 2};
    cout<<"Before Swapping number.."<<endl;
    printArray(A, 8);
    cout<<"\nAfter Swapping Alternate Numbers.."<<endl;
    swapAlternate(A,8);
    printArray(A, 8);
    return 0;
}