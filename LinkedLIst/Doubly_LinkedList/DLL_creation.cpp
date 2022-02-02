#include<iostream>
 using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        
    Node(){
        data = 0;
        next = NULL;
        prev = NULL;
    }
};
 
void linkedListTraversal( Node *head){
     Node *ptr = head;
     cout<<"NULL";
    do{
        cout<<" <- "<<ptr->data<<" -> ";
        ptr = ptr->next;
    }while(ptr!=head);
    cout<<"NULL";
}
 
int main(){

     Node *head = new Node();
     Node *second = new Node();
     Node *third = new Node();
     Node *fourth = new Node();
 
    // Link first and second nodes
    head->data = 10;
    head->next = second;
    head->prev = NULL;
 
    // Link second and third nodes
    second->data = 20;
    second->next = third;
    second->prev = head;
 
    // Link third and fourth nodes
    third->data = 30;
    third->next = fourth;
    third->prev = second;
 
    // Terminate fourth node as a NULL
    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = third;
    
    cout<<" LinkedList are Following..."<<endl;
    linkedListTraversal(head);
    return 0;
}
