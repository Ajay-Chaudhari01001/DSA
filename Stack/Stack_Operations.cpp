// stack operation on Stack...
#include<iostream>
using namespace std;

#define size 50
int *arr = new int[size];
int top = -1;

bool isEmpty(){

    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){

    if(top == size-1){
        return true;
    }
    else{
        return false;
    }
}
void push(int val){

    if(isFull()){
        cout<<"Stack is OverFlow..."<<endl;
    }
    else{
        top++;
        arr[top] = val;
    }
}

int pop(){

    int val = 0;
    if(isEmpty()){
        cout<<"Stack is Empty.."<<endl;
    }
    else{
        val = arr[top];
        top--;
        return val;
    }
}
int main(){

    push(10);
    push(20);
    push(30);
    push(40);

    cout<<"Elements in Stack.."<<endl;
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nPeek Top of the element in Stack\n";
    cout<<arr[top]<<endl;

    cout<<"Pop Element in Stack is = "<<pop()<<endl;

    cout<<"Elements in Stack.."<<endl;
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}