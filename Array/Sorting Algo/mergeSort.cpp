#include<iostream>
using namespace std;

// merging elements in two subarrays...
void merge( int arr[], int start, int mid, int end){
    int i = start;
    int j = mid+1;
    int k = start;
    int arr2[end];

    // checking small elements in two subarrays and store the element new arr2...
    while( i<=mid && j<=end ){
        if(arr[i]<arr[j]){
            arr2[k] = arr[i];
            i++;
        }
        else{
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }

        // storing remaining elements in two subarrays....
        while(j<=end){
            arr2[k] = arr[j];
            j++;
            k++;
        }

        while(i<=mid){
            arr2[k] = arr[i];
            i++;
            k++;
        }
    
    // cpoy arra2 elements in arr 
    for( int i=start; i<=end; i++){
        arr[i] = arr2[i];
    }
}

// break the array in small problems using recursion...
void mergeSort( int arr[], int start, int end ){
    int mid;
    if(start<end){
         mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        // calling merge function 
        merge(arr, start, mid, end);
    }
}

// printing all elements in an array....
void printArray(int arr[], int size){
    for( int i=0; i<size; i++ ){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<" Enter Number Of Elements..."<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting..."<<endl;
    printArray(arr, n);
    cout<<"\nAfter Sorting..."<<endl;
    // call mergeSort function...
    mergeSort(arr, 0, n-1);
    printArray(arr, n);

    return 0; 
}