// w.a.p to find cycle is present are not in Linked List using floyd algorithm....
#include<iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode (Node* &tail, int d) {
    Node* newNode = new Node(d);

    tail->next = newNode;
    tail = newNode;
}
// using floyd's Alogorithm...
Node* detectLoop (Node* head) {

    if(head == NULL){
        return 0;
    }

    Node* slow = head;
    Node* fast = head;
    
    while (slow != NULL && fast != NULL ) {

        fast = fast->next;
        if(fast != NULL) {
           fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            return slow;
        }

    }
    return 0;
}

//void print (Node* &head) {
//    Node* temp = head;
//
//    while(temp != NULL) {
//        cout<<temp->data << " ";
//        temp = temp->next;
//    }
//}
int main () {
    Node* head = new Node(10);
    Node* tail = head;

    insertNode(tail, 20);
    insertNode(tail, 30);
    insertNode(tail, 40);
    insertNode(tail, 50);

    tail->next = head->next->next;

    if(detectLoop(head)){
        cout<<"Cycle is Present in Linked List... " <<endl;
    }
    else {
        cout<<"Cycle is not Present in Linked List..." <<endl;
    }
    

    //print(head);

    return 0;
}