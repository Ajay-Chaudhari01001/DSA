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

    
    return 0;

}