#include<iostream>
using namespace std;

class Stack {
    public:
    // data members..
        int *arr;
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
    
    Stack st = Stack(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    st.peek();

    //cout<<"Peek element is = " <<st.peek() <<endl;

    return 0;
}