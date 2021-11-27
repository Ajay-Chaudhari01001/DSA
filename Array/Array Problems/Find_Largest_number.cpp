// w.a.p. to find largest element in an array..
#include<iostream>
using namespace std;

int largestnum(int arr[], int size){
    int max = 0;
    for(int i=0; i<size-1; i++){

        if(arr[i]>max)
        max = arr[i];
    }
    return max;
    
}
void printArray(int arr[], int size){

    for(int i=0; i<size; i++){

        cout<<arr[i]<<" ";
    }
}
int main()
{

    int A[]={32,11,43,66,45,88, 99,22};
    int n = 8;
    printArray(A,n);
    int numb = largestnum(A, n);
    cout<<" \nLargest element in array .. "<<numb<<endl;

    return 0;
}