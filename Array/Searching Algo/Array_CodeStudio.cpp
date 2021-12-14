/*You have been given an integer arraylist{ARR} of size N. Where N is equal to [2M + 1].
Now, In the given arraylist, 'M' numbres are present twice and one number is present only one.
You need to find and return that number which is unique in the arraylist. 
*/
#include<iostream>
using namespace std;

int main(){

    int arr[5] = { 1,3,1,4,3 };
    int ans = 0;
    for(int i=0; i<5; i++){

      ans = ans^arr[i];  
    }
    cout<<"Answer is = "<<ans;

    return 0;
}