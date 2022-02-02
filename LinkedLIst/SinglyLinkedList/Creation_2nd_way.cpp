#include<iostream>
using namespace std;

class Node {
    public:
     int data;
     Node* next ;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead (Node* &head, int d) {
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail (Node* &tail, int d) {
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void print(Node* &head) {

    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtPositon (Node* &head, int pos, int d ) {
    Node* NewNOde = new Node (d);
    
    if(pos == 1) {
        insertAthead(head, d);
    }
    else {
    Node* temp = head;
    for(int i=1; i<pos-1; i++) {
        temp = temp->next;
    }
    NewNOde->next = temp->next;
    temp->next = NewNOde;
    }

}

void deleteNode (Node* &head, int pos) {
    
    Node* temp = head;
    Node* next = temp->next;
    int ct=1;
    for(int i=1; i<pos-1; i++) {

        temp = temp->next;
    }
      temp->next = next->next;
      delete(next);
}
int main() {
     
     Node* node1 = new Node(10);
    
     Node* head = node1;
     Node* tail = node1;

     insertAtTail(tail, 20);
     insertAtTail(tail,30);

     insertAtPositon(head,1, 40);
     print(head);

     deleteNode (head, 2);
     print(head);
    

    return 0;
}