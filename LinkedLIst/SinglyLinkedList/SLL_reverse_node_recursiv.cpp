// w.a.p. reverse node using recursive  method and taking node from user...
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
Node* reverseRecursive(Node* head){
    // base or exit conditon of the recursive function...
    if(head==NULL || head->next==NULL)
        return head;

    Node* Nhead = reverseRecursive(head->next);

    head->next->next = head;
    head->next = NULL;

    return Nhead;
        
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
    Node* NNode = reverseRecursive(head);
    displayNode(NNode);
    return 0;
}
