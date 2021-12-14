// search in rotaded sorted array
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int search)
{
    int first = s;
    int last = e;
    int mid = 0;
    while(first<=last)
    {
        mid = (first+last)/2;
        if(arr[mid]==search)
            return mid;
        else if(arr[mid]>search)
            last = mid - 1;
        else
            first = mid + 1;
    }
    cout<<" Element not found in array..."<<endl;
}
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

int searchPostion(int arr[], int size, int target){

    int pivot = pivotelement(arr, size);

    if(target>=arr[pivot] && target<=size-1){
        // control go to the second line
        return binarySearch(arr, pivot, size-1, target);
    }
    else{
        // control go to the first line 
        return binarySearch(arr,0, pivot-1, target);
    }
    
}
int main(){

    int A[]={7,9,1,2,3};
    int ans = searchPostion(A,5,3);
    cout<<"Number in an Array at index = "<<ans<<endl;
    return 0;
}