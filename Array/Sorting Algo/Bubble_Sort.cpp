#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void bubbleSort(int arr[], int size){

    for(int i=0; i<size-1; i++){

        for(int j=0; j<size-1-i; j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
}
int main(){
    
    int no;
    cout<<"Enter Size Of Elements..."<<endl;
    cin>>no;
    int a[no];
    cout<<"Enter Elements in Array..."<<endl;
    for(int i=0; i<no; i++){ 
        cin>>a[i];
    }
    cout<<"Before Sorting...."<<endl;
    printArray(a,no);
    cout<<"After Sorting...."<<endl;
    bubbleSort(a,no);
    printArray(a,no);

    return 0;
}