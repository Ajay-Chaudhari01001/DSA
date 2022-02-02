#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int partion(int arr[], int s, int e){
    // lets consider the first element is pivot..
    int pivot = arr[s];
    int count = 0;
    // checking how many elements are less than pivot element...
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot)
            count++;
    }
    int pivotIndex = s+count;
    swap(arr[s], arr[pivotIndex]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e){
    
    if(s>=e)
        return;
    // partion of two parts of an array...
    int p = partion(arr, s, e);
    //sort the left part of array..
    quickSort(arr, s, p-1);
    //sort the right part of array..
    quickSort(arr, p+1, e);
}
int main(){

    int A[]={10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(A) / sizeof(0);

    cout<<"Before Sorting..."<<endl;
    printArray(A, size);

    cout<<"\nAfter Sorting..."<<endl;
    quickSort(A, 0, size-1);
    printArray(A, size);

    return 0;
}