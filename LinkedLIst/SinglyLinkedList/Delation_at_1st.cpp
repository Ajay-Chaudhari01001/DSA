#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;  // pointer next to Node
    Node()
    {
        data = 0;
        next = NULL;
    }
};

// traversal a linked list means print all elements in linked list..
void display(Node* head)
{
    Node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    cout<<"NULL";
}

// Delet node at starting...
Node* deletionAtFirst(Node* head)
{
    Node* ptr = head;
    head = ptr->next;
    delete(ptr);

    return head;
}
int main()
{
    // dynamic memory allocation using new operator
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    first->data = 10;          
    first->next = second;      

    second->data = 20;         
    second->next = third;      

    third->data = 30;          
    third->next = fourth;      

    fourth->data = 40;         
    fourth->next = NULL;       

    cout<<" Before Insertion..."<<endl;
    display(first);

    cout<<" \nAfter Insertion..."<<endl;
    first = deletionAtFirst(first);
    display(first);
    return 0;
}