// w.a.p. reverse node using iterative method and taking node from user...
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
};

void displayNode(Node* temp){
    cout<<"head->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
Node* reverseNode(Node* head){
    Node* prevnode=0;
    Node* curruntnode=head;
    Node* nextnode;
      
    while(curruntnode!=NULL){
        nextnode = curruntnode->next;
        curruntnode->next = prevnode;

        prevnode = curruntnode;
        curruntnode = nextnode;
    }
    head = prevnode;
    return head;
}
int main(){
    Node* head=0, *temp=0;
    int choice;
    while(choice){

        Node* NewNode = new Node();
        cout<<"Enter A New Node = "<<endl;
        cin>>NewNode->data;
        NewNode->next = NULL;
        if(head==0){
            head = temp = NewNode;
        }
        else
        {
            temp->next = NewNode;
            temp = NewNode;
        }
        cout<<"You want add New Node press(0,1) "<<endl;
        cin>>choice;
    }
    temp = head;  
    cout<<"Before Reverse Node..."<<endl;
    displayNode(temp);
    cout<<"After Reverse Node..."<<endl;
    head = reverseNode(temp);
    displayNode(head);
    return 0;
}