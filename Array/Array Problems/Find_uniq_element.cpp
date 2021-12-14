// find a uniq element in an array using bitwise operator XOR ^
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,5,2,1,4};
    int ans = 0;
    for(int i=0; i<7; i++){

        ans = ans^arr[i];
    }
    cout<<"uniq element in an array..."<<ans<<endl;

    return 0;

}