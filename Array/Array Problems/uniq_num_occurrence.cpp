// find the uniq number in occurrences..
#include<iostream>
using namespace std;

int main(){

    int arr1[]={1,3,1,3,4,4,7};
    int ans = 0;
    for(int i=0; i<7; i++){

         ans = ans^arr1[i];
    }
    cout<<ans<<" "<<endl;
    return 0;

}