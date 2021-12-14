#include<iostream>
using namespace std;
// sort the all element in array... 
void bubbleSort(int arr[], int size){

    for(int i=0; i<size-1; i++){

        for(int j=0; j<size-1-i; j++){
            // if J greater than J+1 then swap two numbers...
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
}
// find last 4 largest number in an array
 void kLargest(int nums[], int n, int k)
{
   bubbleSort(nums, n);
    cout << "\nLargest " << k << " Elements: ";
    for (int i = n-1; i>=k; i--)
        cout << nums[i] << " ";
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = 8;
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    int k = 4;
    kLargest(nums, n, k);
}
