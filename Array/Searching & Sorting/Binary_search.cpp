// binary search only use in linear array structure....
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
        else if(arr[mid]>search)
            last = mid - 1;
        else
            first = mid + 1;
    }
    cout<<" Element not found in array..."<<endl;
}
int main()
{
    int n;
    int se;  
    cout<<" Enter size of array.."<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<" What number you want to search in array.."<<endl;
    cin>>se;
    int foundindex = BinarySearch(arr, se, n);
    cout<<" Search element found at index number.."<<foundindex<<endl;

    return 0;
}