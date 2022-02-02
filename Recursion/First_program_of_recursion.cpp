#include<iostream>
using namespace std;

void print(int n){
    // checking base condition n is greater than 0...
    if(n>1)
    // Recursive call itself...
    print(n-1);

    // print n each function call...
    cout<<n<<" ";

}
int main(){

    int no;
    cout<<"Enter any number.."<<endl;
    cin>>no;
    // function calling...
    print(no);

    return 0;
}