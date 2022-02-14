// This is a second approach to sort 0s 1s 2s , in this no data replacement..
#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;
    
    Node (int data) {

        this->data = data;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int d) {
    Node* newNode = new Node(d);

    if(tail == NULL){
        tail->next = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* sortZeroOneTwo(Node* head) {

    Node* temp = head;
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // creating 0s 1s 2s linked list..
    while (temp != NULL) {

        if(temp->data == 0) {
            insertNode(zeroTail, 0); 
        }
        else if(temp->data == 1) {
            insertNode(oneTail, 1); 
        }
        else if(temp->data == 2) {
            insertNode(twoTail, 2); 
        }
        temp = temp->next;
    }


     // merging seprate linked list...
     zeroHead = zeroHead->next;
     zeroTail->next = oneHead->next;
     delete(oneHead);
     oneTail->next = twoHead->next;
     delete(twoHead);
     twoTail->next = NULL;

     head = zeroHead;

     return(head);
    
}
void print (Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main () {
    Node* tail = new Node(2);
    Node* head = tail;
    insertNode (tail, 1);
    insertNode (tail, 0);
    insertNode (tail, 2);
    insertNode (tail, 0);
    insertNode (tail, 2);

    cout<<"Before Sorthing... " <<endl;
    print(head);
    head = sortZeroOneTwo(head);
    cout<<"\nAfter Sorting..." <<endl;
    print(head);

    return 0;
}