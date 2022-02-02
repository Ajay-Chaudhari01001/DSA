#include<iostream>
using namespace std;

int factorial(int n){
    // base case.
    if(n == 0)
        return 1;
    //           recursive call..
    int fact = n*factorial(n-1);

    return fact;
}
int main(){

    int no;
    cout<<"Enter any number"<<endl;
    cin>>no;
    int result = factorial(no);
    cout<<"\n Factorial is = "<<result<<endl;
    return 0;
}