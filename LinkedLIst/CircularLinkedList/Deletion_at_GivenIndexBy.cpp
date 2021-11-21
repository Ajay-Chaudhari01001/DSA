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
void linkedListTraversal(Node* head){
    Node* ptr = head;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr!=head);
   
}
Node* deleteAtByindex(Node* head, int index){
    Node* ptr = head->next;
    Node *p = NULL;
    for(int i=0; i<index-1; i++){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    delete(ptr);
    return head;
}
int main(){
    
     Node *head = new Node();
     Node *second = new Node();
     Node *third = new Node();
     Node *fourth = new Node();
 
    // Link first and second nodes
    head->data = 10;
    head->next = second;
 
    // Link second and third nodes
    second->data = 20;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 30;
    third->next = fourth;
 
    // // Linked fourth to head node and circular linked list are created..
    fourth->data = 40;
    fourth->next = head;
    
    cout<<" Before Delation..."<<endl;
    linkedListTraversal(head);
    
    cout<<"\n After Delation...."<<endl;
    head = deleteAtByindex(head, 2);
    linkedListTraversal(head);
    return 0;
}
