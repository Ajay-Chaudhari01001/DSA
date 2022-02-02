#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
}
void sortNegative(int arr[],int size){
    int i=-1;
    int pivot=0;
    for(int j=0; j<size; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    
    int A[]={1,-3,5,-,5,7,-9,-7,22,44};
    sortNegative(A,9);
    printArray(A,9);

    return 0;
}