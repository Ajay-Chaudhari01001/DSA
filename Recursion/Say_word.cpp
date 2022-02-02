#include<iostream>
using namespace std;

void sayHello(string *arr, int n){
    // base case...
    if(n == 0)
        return;
    // processing ...
    int digit = n%10;
    n = n/10;
    // recursive call...
    sayHello(arr, n);

    cout<<arr[digit]<<" ";
}
int main(){

    string a[]={"Zero", "One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int no;
    cout<<"Enter a Number.."<<endl;
    cin>>no;
    // function calling...
    sayHello(a, no);

    return 0;
}