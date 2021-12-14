#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void insertionSort(int arr[], int size){

    int i, j, key;
    for(j=1; j<size; j++){

        key = arr[j];
        i = j-1;
        while(i>=0 && arr[i]>key){

            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
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
    insertionSort(a,no);
    printArray(a,no);

    return 0;
}
/*
Time Complexity of Insertion sort Algorithms...
 when we want sort array using of insertion sort and array are Deccending order then
 will be take time complexity O(n2).(n sqaure)..
 and when array are allready sorted then will be take O(n)..
*/