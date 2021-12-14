// Peak Index in a Mountain Array...

#include<iostream>
using namespace std;

int peakelement(int arr[], int size){
    
    int first = 0;
    int last = size-1;
    while(first<size){
        int mid = (first+last)/2;

        if(arr[mid]<arr[mid+1]){
            first = mid + 1;
        }
        else{
            last = mid;
        }
    }
    return 0;

}
int main(){

    int a[]={1,2,3,4,5,3,2,1};

    int ans = peakelement(a, 8);
    cout<<"Peak Element in Array is = "<<ans<<endl;

    return 0; 
}   