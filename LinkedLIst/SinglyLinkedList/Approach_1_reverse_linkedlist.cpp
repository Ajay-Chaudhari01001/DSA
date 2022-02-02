#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insertAtTail(Node* &tail, int d) {

        Node* NewNode = new Node(d);
        if(tail == NULL) {
            tail = NewNode;
        }
        
        tail->next = NewNode;
       
}


void print (Node* head) {
    Node* ptr = head;

    while(ptr != NULL) {
        cout<<ptr->data <<" ";
        ptr = ptr->next;
    }
    
}

int main () {

    Node* head = new Node(10);
    Node* tail = head;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    
    print(head);

    return 0;
}