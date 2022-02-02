#include<bits/stdc++.h>
using namespace std;

void reverseString(string& name, int l, int r){

    // base case
    if(l>r)
        return;
    
    swap(name[l], name[r]);

    l++;
    r--;

    reverseString(name, l, r);

}
int main(){

    string str = "MJ COLLEGE JAGLAON";

    cout<<"Berfore Reversing..."<<endl;
    cout<<str;

    cout<<"\nAfter Reversing..."<<endl;
    reverseString(str, 0, str.length()-1);
    cout<<str;

    return 0;
}