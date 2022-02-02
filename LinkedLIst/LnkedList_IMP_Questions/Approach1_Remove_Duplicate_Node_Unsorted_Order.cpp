// Time Complexity = O(n^2)
// Space Complexity = O(1)
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

// remove duplicate nodes in linked list..
Node* removeDuplicate (Node* head) {
    Node* curr = head;

    if(head == NULL)
        return head;

    while(curr != NULL) {
        Node* temp = curr;
    while(temp->next != NULL) {
        
        if(curr->data == temp->next->data) {
            Node* nodeTodelete = temp->next;
            temp->next = temp->next->next;
            nodeTodelete->next = NULL;
            delete(nodeTodelete);
        }
        else {
            temp = temp->next;
        }
    }
        curr = curr->next;
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