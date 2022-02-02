#include<iostream>
using namespace std;

int searchFloor(int arr[], int num, int size){
    int start = 0;
    int end = size-1;
    int mid;
    int result;
   while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]<num){
            start = mid+1;
        }
        else{
            result = arr[mid];
            end = mid-1;
        }
    }
    return result;

}
int main(){
    
    int A[]={1,2,3,4,6,7,9};
    cout<<"Ceil of a number at ="<< searchFloor(A,5,7)<<endl;

    return 0;

}