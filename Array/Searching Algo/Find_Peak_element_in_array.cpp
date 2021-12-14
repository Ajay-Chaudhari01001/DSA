// find peak(small) element in array
#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int mid;
    int start = 0;
    int end = size-1;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]>arr[mid+1])
            start = start+1;
        else
            end = end-1;
    }
    return start;
}
int main(){
    int A[]={8,11,3,1,4,7};
    cout<<"Peak Element in Array at Index = "<<peakElement(A,5);
    return 0;
}