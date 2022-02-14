#include<iostream>
#include<stack>

using namespace std;

void insertAtBottm(stack<int>&s, int num) {

    // base case
    if(s.empty()) {
         s.push(num);
         return;
    }

    int ch = s.top();
    s.pop();

    // recursive call
    insertAtBottm(s, num);

    s.push(ch);
}

void reverseStack(stack<int>&s) {

    // base case
    if(s.empty())
        return;

    int temp = s.top();
    s.pop();

    // recursive call
    reverseStack(s);

    // insertAtBottm function call for every elements..
    insertAtBottm(s, temp);
}

int main () {

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Before reversing stack..." <<endl;
    cout<<s.top();

    cout<<"\nAfter reversing stack..." <<endl;
    reverseStack(s);
    cout<<s.top();

    return 0;
}