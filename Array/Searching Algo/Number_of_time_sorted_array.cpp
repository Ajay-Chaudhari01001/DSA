//w.a.p. to count number of time rotated array in sorted array...
#include<iostream>
using namespace std;

int nOftRotated(int arr[], int size){

    int start = 0;
    int end = size-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid])
            return mid;
        else if(arr[mid]>arr[mid+1])
            start = mid+1;
        else
            end = mid-1;
    }
        return mid;
}
int main(){

    int a[]={11,12,15,18,2,5,6,8};
    int result =  nOftRotated(a,8);
    cout<<"Number of Time Rotated Array."<<result<<endl;

    return 0;
}

