#include <iostream>
using namespace std;

// Creating a node class
class Node
{
public:
    int data;
    Node *next;

    // creating a new node via a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// creating a function to insert node at head also we are taking a refrence so that we can make changes in the original node not the copy
void insertathead(Node *&head, int data)
{
    // creating a new node
    Node *temp = new Node(data);

    // temp has a next with it which is pointing towards head
    temp->next = head;
    // with this line we change the head to the start that's temp
    head = temp;
}

void insertattail(Node *&tail, int data)
{

    Node *temp = new Node(data);
    tail -> next = temp; // we point the initail tails next to the new tail we want to have 
    // tail = tail-> next; // and then we change the tail from where it was initaill to the latest tail we have 
    tail = temp;
}   

void print(Node *&head)
{
    Node *temp = head;

    // till the value of temp becomes null
    while (temp != NULL)
    {
        cout << temp->data << " "; // print the value of temp
        temp = temp->next;         // going to the next node we can go to the next node by temp's next which has the address of the next node
    }
    cout << endl; // for better visibility
}

int main()
{

    // creating a new node and later we also passed a value 10
    Node *node1 = new Node(10);

    // printing the address of the new node
    // cout << node1->data << endl;

    // // printing the address of the next node
    // cout << node1->next << endl;
    
    //head pointed to node 1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // passsing the value inside the parameter for the new head
    insertattail(tail, 12);

    print(head);

    // passsing the value inside the parameter for the new head
    insertattail(tail, 15);

    print(head);

    return 0;
}