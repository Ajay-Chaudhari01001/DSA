// find pivot element in an array 
#include<iostream>
using namespace std;

int pivotelement(int arr[], int size){

    int start = 0;
    int end  = size-1;
    int mid; 
    while(start<end){

        mid = (start+end)/2;

        if(arr[mid] >= arr[0])
            start = mid+1;
        else
            end = mid;
    }
    return start;
}
int main(){

    int A[]={7,9,1,2,3};

    int ans = pivotelement(A, 5);
    cout<<"Pivot element at index = "<<ans <<endl;

    return 0;
}