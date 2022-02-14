#include<iostream>
using namespace std;

class Stack {
    public:
        int* arr;
        int top1;
        int top2;
        int size;
    
    Stack (int size) {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    // push element in first stack..
    void push1 (int element) {

        if(top2 - top1 > 1) {
            top1++;
            arr[top1] = element;
        }
        else {
            cout <<"Stack Overflow..." <<endl;
        }
    }

    // push element in second stack..
    void push2 (int element) {

        if(top2 - top1 > 1) {
            top2--;
            arr[top2] = element;
        }
        else {
            cout <<"Stack Overflow..." <<endl;
        }
    }

    // pop element in first stack..
    void pop1 () {

        if(top1 >= 0) {
            cout <<"pop element in stack1 = " <<arr[top1] <<endl;
            top1--;
        }
        else {
            cout <<"Stack isEmpty.." <<endl;
        }
    }

    // pop element in second stack..
    void pop2 () {

        if(top2 <= size) {
            cout <<"pop element in stack2 = " <<arr[top2] <<endl;
            top2++;
        }
        else {
            cout <<"Stack isEmpty.." <<endl;
        }
    }

    // peek1 in stack 1 ..
    int peek1 () {

        if(top1 >= 0) {
            return arr[top1];
        }
        else {
            cout <<"Stack1 isEmpty..." <<endl;
        }
    }

    // peek in stack 2 ..
    int peek2 () {

        if(top2 <= size) {
            return arr[top2];
        }
        else {
            cout <<"Stack1 isEmpty..." <<endl;
        }
    }
};

int main () {

    Stack st = Stack(6);

    // pushing element in stack1
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);

    st.pop1();
    
    cout <<"Stack1 in top element = " <<st.peek1() <<endl;

    // pushing element in stack2
    st.push2(1);
    st.push2(2);

    st.pop2();

    cout <<"Stack2 in top element = " <<st.peek2() <<endl;


    return 0;
}