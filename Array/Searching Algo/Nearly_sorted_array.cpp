// w.a.p. to program searching in nearly sorted array...
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int search, int size)
{
    int first = 0;
    int last = size-1;
    int mid = 0;
    while(first<=last)
    {
        mid = (first+last)/2;
        if(arr[mid]==search)
            return mid;
        else if(arr[mid-1]==search)
            return mid-1;
        else if(arr[mid+1]==search)
            return mid+1;
        else if(arr[mid]>search)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return mid;
    cout<<" Element not found in array..."<<endl;
}
int main(){

    int a[]={5,10,30,20,40};

    cout<<"Number at index = "<<BinarySearch(a,20,5)<<endl;

    return 0;

}