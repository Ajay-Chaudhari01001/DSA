// merger two sorted array and then array will be sorted new...
#include<iostream>
using namespace std;
void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void merge(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // coping reming elements in array..
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr2[k] = arr2[j];
        k++;
        j++;
    }
}
int main(){

    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[9];
    merge(a1,5,a2,4,a3);

    printArray(a3,9);

    return 0;
}