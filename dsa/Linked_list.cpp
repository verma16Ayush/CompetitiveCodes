#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next_node_ptr;
        Node()
        {
            next_node_ptr = NULL;
        }
};

void InsertAtEnd(Node* &head, int data)
{
    // Node* new_node = new Node();
    // new_node->data = data;
    // new_node->next_node_ptr = head;
    // head = new_node;
    if(head==NULL)
    {
        head->data = data;
    }
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next_node_ptr = head;

}


void print(Node* n)
{
    // Node* temp = n;
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n = n->next_node_ptr;
    }
}

int main()
{
    Node* head = NULL;
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 3);
    print(head);
    print(head);
    return 0;
}