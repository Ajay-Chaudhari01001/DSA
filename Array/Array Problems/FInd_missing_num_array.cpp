// w.a.p. to find missing element in sorted array...
#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,4,5,7};
    int size = 4;
    int sum_of_arr = 0;
    int missing_num = 0;
    int sum_n_num = size *(size+1)/2;
    cout<<"sum of num = "<<sum_n_num<<endl;
    for(int i=0; i<size; i++){

        sum_of_arr += arr[i];
    }
    cout<<" sum arr = "<<sum_of_arr <<endl;
    missing_num = sum_n_num - sum_of_arr;

    cout<<"Missing Element in array = "<<missing_num<<endl;

    return 0;
}