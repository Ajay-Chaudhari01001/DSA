#include<iostream>
using namespace std;

int findElement(int arr[], int size, int search){
    
    int first = 0;
    int last = size-1;
    while(first<=last){
        int mid = (first+last)/2;

        if(arr[mid]==search)
            return mid;
        else if(search==arr[mid-1])
            return mid-1;
        else if(search==arr[mid+1])
            return mid+1;
    }

}
int main(){

    int a[]={10,20,40,30,50};

    int ans = findElement(a,5,50);
    cout<<"Element in Array at index = "<<ans<<endl;

    return 0; 
}   