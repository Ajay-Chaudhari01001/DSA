#include<iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        data = d;
        next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
       cout << " memory is free for node with data " << value << endl;
    }

};

 void insertNode(Node* &tail, int element, int d) {

     if(tail == NULL){
       Node* newNode = new Node(d);
       tail = newNode;
       newNode->next = newNode;
     }
     else {
         Node* curr = tail;
        while(curr->data != element) {
            curr = curr->next;
        }
        Node* newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
      }  
 }

bool checkCircular (Node* &tail) {

    if(tail == NULL)
        return true;
    if(tail->next == NULL)
        return false;

    Node* temp = tail;
    do {
        temp = temp->next;
    }while(temp != tail);

    if(temp == tail)
        return true;
}
void print(Node* tail) {

     Node* temp = tail;

     do{
         cout<<tail->data <<" ";
         tail = tail->next;
     }while(tail != temp);
}

int main() {
    
    Node* tail = NULL;
    insertNode(tail,1,10);
    insertNode(tail,10,20);
    insertNode(tail,20,30);
    insertNode(tail,30,40);
    insertNode(tail,40,50);
    insertNode(tail,50,100);

    print(tail);

    if(checkCircular(tail)) {
        cout<<"\nLinked List is Circular..." << endl;
    }
    else {
        cout<<"\nLinked List is not Circular..." << endl;
    }

    return 0;

}