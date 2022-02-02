#include<iostream>
using namespace std;

int Search(int arr[], int n, int k) {

     int start = 0;
     int end  = n-1;

     while(start <= end) {

         int mid = (start+end)/2;
         if(arr[mid] == k)
            return mid;
        
        if(arr[mid] >= arr[start]) {
            if(arr[mid] >= k && k >= arr[start])
                end = mid-1;
            else
                start = mid-1;
        }
        else if(arr[mid] <= k && arr[end] >= k)
            start = mid+1;
        else
            end = mid-1;
     }
     return -1;
}
int main() {

    int A[]={5,6,7,8,9,10,1,2,3};
    int size = sizeof(A)/sizeof(0);
    int search;
    cout<<"Enter an Element you want search"<<endl;
    cin>>search;

    cout<<"Your elemtn at index number = " <<Search(A, size, search);

    return 0;
}