#include<iostream>
using namespace std;

int searchFloor(char arr[], char alpha, int size){
    int start = 0;
    int end = size-1;
    int mid;
    char result='#';
   while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]<alpha){
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
    
    char A[]={'a','c','f','h'};
    cout<<"Ceil of a number at ="<< searchFloor(A,'f',4)<<endl;

    return 0;

}