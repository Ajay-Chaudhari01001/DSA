// FIRST AND LAST POSITION IN OF AN ELEMENT IN SORTED ARRAY occurrence element..
/* 
you have been given a sorted arrayList ARR consisting of 'N' elements. You are also given an ineger 'k;
Now your task is to find the firs{t and last occurrence of 'K' in ARR
*/
#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int num){

    int first = 0;
    int last = size-1;
    int mid;
    int ans = -1;
    while(first<=last){

        mid = (first+last)/2;
        if(arr[mid]==num){
            ans = mid;
            last = mid - 1;
        }
        else if(arr[mid]>num){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    return ans;
}
int lastOccurrence(int arr[], int size, int num){

    int first = 0;
    int last = size-1;
    int mid;
    int ans = -1;
    while(first<=last){

        mid = (first+last)/2;
        if(arr[mid]==num){
            ans = mid;
            first = mid + 1;
        }
        else if(arr[mid]>num){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    return ans;
}
int main(){

    int a[]={12,13,44,44,44,56,77};

    int ans = firstOccurrence(a, 7, 44);
    cout<<"First Occurrence In Array of Number Index no = "<<ans<<endl;
    ans = lastOccurrence(a,7,44);
    cout<<"Last Occurrence In Array of Number Index no = "<<ans<<endl;

   return 0;
    
}