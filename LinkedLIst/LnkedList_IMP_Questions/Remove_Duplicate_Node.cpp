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
        tail->next = NewNode;
        tail = NewNode;
}

// remove duplicate nodes in Sorted linked list..
Node* removeDuplicate (Node* head) {
    Node* curr = head;

    if(head == NULL)
        return head;
        
    while(curr->next != NULL) {

         if(curr->data == curr->next->data) {
             Node* next_next = curr->next->next;
             Node* nodeTodelete = curr->next;
            
            // deleting the duplicate node....
             delete(nodeTodelete);

             curr->next = next_next;
         }
         else {
             curr = curr->next;
         }
    }
    return head;
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
    insertAtTail(tail,30);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    
    head = removeDuplicate (head);

    print(head);

    return 0;
}