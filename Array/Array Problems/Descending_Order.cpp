// write a program to reverse array in Descending Order...
#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void descendingOrder(int arr[], int size)
{
    int temp=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                 temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}

int main(){

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    cout<<"Before Descending Order..."<<endl;
    printArray(arr, 9);

    cout<<"\nAfter Descending Order..."<<endl;
    descendingOrder(arr, 9);
    printArray(arr, 9);

    return 0;
}