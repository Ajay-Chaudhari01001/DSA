#include<iostream>
using namespace std;

 int fibonacci(int n){
    // checking 2 base cases..
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    // recursive call
     return fibonacci(n-1) + fibonacci(n-2);
}
int main(){

    int no;
    int i=0;
    cout<<"Enter the number of terms.."<<endl;
    cin>>no;
    // function calling...
    while(i<no){
      cout<<fibonacci(i)<<" ";
      i++;
    }

    return 0;
}