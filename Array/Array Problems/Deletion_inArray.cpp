// w.a.p. Delete a number in array to specific positon ..
#include<iostream>
using namespace std;

void deletion(int arr[], int size,int index){

    for(int i=index; i<size-1; i++){

        arr[i] = arr[i+1];
    }
    cout<<"Deletion are Successfully..."<<endl;
    
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
    int indexNumb=1;  // positon to delete number...
    cout<<"Before Insertion..."<<endl;
    printArray(A,n);
    cout<<"\nAfter Insertion..."<<endl;
    deletion(A, n, indexNumb);
    n--;  // increase the array size due to isertion new element.. 
    printArray(A,n);

    return 0;
}