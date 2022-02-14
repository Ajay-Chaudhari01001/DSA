// This is First appraoch to sort 0s 1s 2s , in this data replace 
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

Node* sortZeroOneTwo (Node* head) {
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    Node* temp = head;

    // counting the umber of nodes 0s 1s 2s..
    while(temp != NULL) {
        if(temp->data == 0){
            countZero++;
        }
        else if(temp->data == 1) {
            countOne++;
        }
        else if (temp->data == 2) {
            countTwo++;
        }
        temp = temp->next;
    }

    temp = head;
    
    // sorting the number of 0s 1s 2s ...
    while(temp != NULL) {
         if(countZero != 0) {
            temp->data = 0;
            countZero--;
        }
        else if(countOne != 0) {
            temp->data = 1;
            countOne--;
        }
        else if (countTwo != 0) {
            temp->data = 2;
            countTwo--;
        }
        temp = temp->next;
    }
    return head;
}

void print (Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
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