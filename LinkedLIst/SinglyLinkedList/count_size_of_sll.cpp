#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;  // pointer to Node
    Node()
    {
        data = 0;
        next = NULL;
    }
};

// traversal a linked list means print all elements in linked list..
void display(Node* head)
{
    int count=0;
    Node* ptr = head;
    while(ptr!=NULL)
    {          
                count++;
                ptr = ptr->next;
    }
    cout<<count;

}
int main()
{
    // dynamic memory allocation using new operator
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    first->data = 10;           // assign a data to first node
    first->next = second;       // linked to next node second , 

    second->data = 20;           // assign a data to first node
    second->next = third;       // linked to second node to third

    third->data = 30;           // assign a data to first node
    third->next = fourth;       // linked to third node to fourth ,

    fourth->data = 40;           // assign a data to first node
    fourth->next = NULL;       // NULL assing a fourth node.

    cout<<" Singly Linked List are Following..."<<endl;
    display(first);

    return 0;
}