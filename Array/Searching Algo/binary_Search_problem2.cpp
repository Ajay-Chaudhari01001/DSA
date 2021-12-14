//FIND TOTAL NUMBER OF OCCURRENCE IN ARRAY..
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

    int ans1 = firstOccurrence(a, 7, 44);
    cout<<"First Occurrence In Array of Number Index no = "<<ans1<<endl;
    int ans2 = lastOccurrence(a,7,44);
    cout<<"Last Occurrence In Array of Number Index no = "<<ans2<<endl;
    int tnc = (ans2 - ans1)+1;
    cout<<"Total Number of Occurrence = "<<tnc<<endl;

   return 0;
    
}