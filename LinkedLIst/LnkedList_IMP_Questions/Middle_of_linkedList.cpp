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
Node* middleElement(Node* head){
     

     if(head == NULL || head->next = NULL) 
        return head;

    if(head->next->next == NULL)
        return head;


    Node* slow = head;
    node* fast = head->next;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) 
            fast = fast->next;
        
        slow = slow->next;
    }
    return slow

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
    cout<<"LinkedList are ..."<<endl;
    displayNode(temp);
    cout<<"Middle Element in LinkedList.."<<endl;
    Node* middle = reverseNode(temp);

    cout<<middle->data;
    return 0;
}