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
    cout<<"NULL";
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
    displayNode(temp);
    return 0;
}