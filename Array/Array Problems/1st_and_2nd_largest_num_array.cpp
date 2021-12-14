// w.a.p. to find second and first Largest element in array...
#include<iostream>
using namespace std;

void seach(int arr[], int size){

    int first_largest = 0;
    int second_largest = 1;

    if(first_largest>second_largest){

        int temp = first_largest;
        second_largest = first_largest;
        first_largest = temp;
    }

    for(int i=2; i<size; i++){

        if(arr[i]>first_largest){

            second_largest = first_largest;
            first_largest = arr[i];
        }
        else{

            if(arr[i]>second_largest)
            {
                second_largest = arr[i];
            }
        }
    }
    cout<<"First Largest Element in array = "<<first_largest<<endl;
    cout<<"Second Largest Element in array = "<<second_largest<<endl;
}
int main(){

    int arr[9]={ 22,34,55,12,88,43,87,25,70};
    
    seach(arr,9);

    return 0;

}