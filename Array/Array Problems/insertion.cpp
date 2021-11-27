// w.a.p. insertion in array to specific positon ..
#include<iostream>
using namespace std;

void insertion(int arr[], int size, int number, int index){

    for(int i=size; i>=index-1; i--){

        arr[i+1] = arr[i];
    }
    arr[index] = number;
    cout<<"Insertion are Successfully..."<<endl;
    
}
void printArray(int arr[], int size){

    for(int i=0; i<size; i++){

        cout<<arr[i]<<" ";
    }
}
int main()
{

    int A[20]={32,11,43,66,45,88, 99,22};
    int n=8;  // capacity of array is 20 and we intialize with size of 8...
    int element=55;  // number are inserted in array...
    int indexNumb=3;  // positon to insert number...
    cout<<"Before Insertion..."<<endl;
    printArray(A,n);
    cout<<"\nAfter Insertion..."<<endl;
    insertion(A, n, element, indexNumb);
    n++;  // increase the array size due to isertion new element.. 
    printArray(A,n);

    return 0;
}