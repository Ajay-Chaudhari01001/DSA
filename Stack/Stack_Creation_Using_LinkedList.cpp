#include<iostream>
using namespace std;

class Stack {
    public:
        int data;
        Stack* next;
        Stack* top;

    Stack () {
        next = NULL;
        top = NULL;
    }

    // pushing element in a Stack LinkedList..
    void push (int d) {

       Stack* newNode = new Stack();
       newNode->data = d;
       newNode->next = top;
       top = newNode; 
    }

    // printing all elements in a Stack..
    void print() {
        
        if(top == NULL) {
            cout <<"Stack is Empty.." <<endl;
        }
        else {
            while (top != NULL) {
                cout <<top->data <<" " <<endl;
                top = top->next;
            }
        }
    }

    // pop element in a Stack...
    void pop() {
        if(top == NULL) {
            cout<< "Stack Underflow" <<endl;
        } 
        else 
           top = top->next;
    }

    // peek top most element in a Stack...
    int peek() {
        if(top == NULL) {
            cout<< "Cant peek in Stack because stack isEmpy.." <<endl;
        }
        else {
            return top->data;
        }
    }

};

int main () {

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    cout<<"Peek element is = " <<st.peek() <<endl;

    st.print();

    return 0;
}