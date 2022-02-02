// Time Complexity = O(n)
// Space Complexity = O(n)
#include<iostream>
#include<map>
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
        tail->next = NewNode;
        tail = NewNode;
}

// remove duplicate nodes in linked list..
Node* removeDuplicate (Node* head) {
     Node* curr = head;
     map<int,int>m;
     Node* prev = curr;
     m[curr->data] = 1;
     curr = curr->next;

     while(curr != NULL) {
         
         if(m[curr->data]) {
             prev->next = curr->next;
             delete(curr);
         }
         else {
             m[curr->data] = 1;
             prev = curr;
         }
         curr = prev->next;
     }
     return head;
}

void print (Node* &head ) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main () {

    Node* head = new Node(10);
    Node* tail = head;
    insertAtTail(tail,40);
    insertAtTail(tail,30);
    insertAtTail(tail,10);
    insertAtTail(tail,30);
    insertAtTail(tail,20);
    insertAtTail(tail,40);
    
    head = removeDuplicate (head);

    print(head);

    return 0;
}