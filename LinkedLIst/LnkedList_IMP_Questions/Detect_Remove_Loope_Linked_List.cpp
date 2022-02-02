// w.a.p to find cycle is present are not in Linked List....
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

bool detectLoop (Node* &head) {
    Node* temp = head;
    if(head == NULL){
        return false;
    }
    map<Node*, bool>visited;

    while (temp != NULL) {
        
        if(visited[temp] == true) {
            // cycle is present....
            cout<<"Present Cycle Position.." <<temp->data <<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    // cycle is not present...
    return false;
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