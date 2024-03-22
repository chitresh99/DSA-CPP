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
    cout << node1->data << endl;

    // printing the address of the next node
    cout << node1->next << endl;
    
    //head pointing to node1
    Node* head = node1;
    
    //passsing the value inside the parameter for the new head
    insertathead(head,12);

    print(head);

    //passsing the value inside the parameter for the new head
    insertathead(head,15);

    print(head);

    return 0;
}