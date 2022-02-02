// w.a.p to Remove Loop in Cycle Linked List...
#include<iostream>
#include<map>

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

Node* removeLoop (Node* &head) {
    Node* temp = head;
    
    if(head == NULL) {
        return head;
    }
    
    map<Node*, bool>visited;
    
    while(visited[temp->next] != true) {
        
        visited[temp] = true;
        temp = temp->next;
    }
    
    temp->next = NULL;
    return head;
}

void print (Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<<temp->data << " ";
        temp = temp->next;
    }
}
int main () {
    Node* head = new Node(10);
    Node* tail = head;

    insertNode(tail, 20);
    insertNode(tail, 30);
    insertNode(tail, 40);
    insertNode(tail, 50);

    tail->next = head->next->next;

    head = removeLoop (head);

    print(head);

    return 0;
}