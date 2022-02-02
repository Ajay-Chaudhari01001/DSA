#include<iostream>
using namespace std;
// searching an element ..
int binarySearch(int arr[], int start, int end, int key){
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            start = mid+1;
        else
            end = mid-1;
    }
    return mid;
}
// find the start and ending postion , to help find key between start and end...
int findKey(int arr[], int key){

    int start = 0;
    int end = 1;
    int mid;
    while(key>arr[end]){
        start = end;
        end = end*2;
    }
    // call the binary search function to find element..
    return binarySearch(arr,start,end,key);
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,11,12,13,14,16,18,20};
    //int n = 16 size of array
    int num;
    cout<<"What you want to search in array"<<endl;
    cin>>num;
    int result = findKey(a,num);
    cout<<"Element found at index = "<<result<<endl;

    return 0;
}