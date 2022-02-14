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

Node* mergeSolve (Node* &first, Node* &second) {

    Node* curr1 = first;
    Node* curr2 = second;
    Node* next1 = curr1->next;
    Node* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL) {

        if(curr1->data < curr2->data && next1->data > curr2->data ) {

            // linking node....
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // update pointers...
            curr1 = curr2;
            curr2 = next2;

            
        }
        else {
            
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL) {
                curr2->next = curr2;
                return first;
            }
        }
    }
}
 Node* mergeTowLinkedList (Node* &first, Node* &second) {

     // checking linked list are empty or not ... 
     if(first == NULL) {
         return second;
     }
     if(second == NULL) {
         return first;
     }

     if(first->data <= second->data) {
         return mergeSolve (first, second);
     }
     else {
         return mergeSolve (second, first);
     }
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
    // First Linked list..
    Node* tail1 = new Node(1);
    Node* head1 = tail1;
    insertNode (tail1, 3);
    insertNode (tail1, 5);

    // second Link list..
    Node* tail2 = new Node(2);
    Node* head2 = tail2;
    insertNode (tail2, 4);
    insertNode (tail2, 6);

    cout<<"\nBefore Merging... " <<endl;
    print(head1);
    print(head2);

    head1 = mergeTowLinkedList(head1, head2);
    cout<<"\nAfter Merging 2 Sorted Linked List..." <<endl;
    print(head1);

    return 0;
}