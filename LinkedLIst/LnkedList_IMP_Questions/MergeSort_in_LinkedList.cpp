#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// insert element in linkedlist attail
void insertAtTail (Node* &tail, int d) {

    Node* newNode = new Node(d);
    if(tail == NULL) {
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

// printing data in linkedlist..
void print (Node* &head) {
    
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}

// find mid of linked list...
Node* findMid (Node* &head) {

    Node* slow = head;
    Node* fast = slow->next;

    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
}

// sorting element..
Node* merge (Node* &left, Node* &right) {

    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    while(left != NULL && right != NULL) {
        
        if(left->data < right->data) {
            temp->next = left;
            temp = left;
            left = left->next;

        }
        else {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    // storing remaing data ...
    while(left != NULL) {
        temp->next = left;
            temp = left;
            left = left->next;
    }
     while(right != NULL) {
        temp->next = right;
            temp = right;
            right = right->next;
    }

    temp = dummyNode->next;
    delete (dummyNode);
    return temp;
}

Node* mergeSort (Node* &head) {

    // split linked list in 2 halvs..
    Node* mid = findMid (head);

    Node* left = head;
    Node* right = mid->next;

    // call recursiverly in 2 halvs part..
    left = mergeSort(left);
    right = mergeSort(right);

    // merge
    Node* result = merge (left, right);

    // return answer result..
    return result;
}

int main () {

    Node* head;
    Node* tail = NULL;
    insertAtTail(tail,6);
    head = tail;
    insertAtTail(tail,5);
    insertAtTail(tail,4);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);

    cout <<"Before Sorting.." <<endl;
    print(head);

    Node* newHead = mergeSort(head);

    cout <<"After Sorting.." <<endl;
    print(newHead);


    return 0;   
}