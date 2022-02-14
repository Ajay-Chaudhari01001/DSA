#include<iostream>
using namespace std;

class Stack {
    public:
    // data members..
        char *arr;
        int top;
        int size;
    
    // constructor...
    Stack (int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // pushing elements in a stack...
    void push (int element) {
        if(top <= size) {
            top++;
            arr[top] = element;
        }
        else {
            cout <<"Stack Overflow..." <<endl;
        }
    }

    // pop element in a stack...
    void pop () {
        if(top >= 0) {
            cout<<arr[top]<<" ";
            top--;
        }
        else {
            cout <<"Stack Underflow..." <<endl;
        }
    }
    
    // peek top of the element...
    int peek () {
        if(top >= 0) 
            return arr[top];
        else 
            cout <<"Stack is Empty..." <<endl;
    }

    // checking Stack isEmpty or Not...
    bool isEmpty () {
        if(top < 0) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main () {
    
    Stack st = Stack(4);

    st.push(a);
    st.push(j);
    st.push(a);
    st.push(y);


    return 0;
}