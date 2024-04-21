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

    // creating a destructor
    ~Node()
    {
        int value = this->data;

        // block of code to free the memory
        if (this->next != NULL) // node's next is not null then we
        {
            delete next;       // then we delete the node's next
            this->next = NULL; // we make it null
        }
        cout << "memory is free for node with data" << value << endl;
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
    tail->next = temp; // we point the initial tails next to the new tail we want to have
    // tail = tail-> next; // and then we change the tail from where it was initaill to the latest tail we have
    tail = temp;
}

void insertinthemiddle(Node *&tail, Node *&head, int position, int data)
{
    // if we want to insert at first position
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }
    // we want to traverse first
    Node *temp = head; // creatig a node which points towards the head
    int count = 1;     // starting from the first node

    // iterating through the nodes using while loop
    while (count < position - 1) // position - 1 is the node before where we wanna insert like if we want to insert at 2 then we stop iterating at 1
    {
        temp = temp->next; // moving the temp foward
        count++;           // incrementing the node
    }

    // inserting a node at the end
    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    // creating a new node for a new data
    Node *nodetoinsert = new Node(data); // allocating memory in a heap allocating it manually

    nodetoinsert->next = temp->next; // setting the node to insert's next to temp's next

    temp->next = nodetoinsert; // setting temp's next to the node we want to insert
}
void deletenode(int position, Node *&head)
{
    // deleting the first node
    if (position == 1)
    {
        Node *temp = head; // storing
        head = head->next; // moving the pointer to the next node
        temp->next = NULL;//removing the pointer from the node we want to delete
        delete temp;
    }
    else
    {
        Node *curr = head; // setting curent to head pointer
        Node *prev = NULL; // setting previous to null pointer

        int count = 1;
        while (count <= position)
        {
            prev = curr;       // prev is curr
            curr = curr->next; // moving current forward via the address of next node stored in current's next
            count++;           // count ++
        }

        // back to the deleting part
        prev->next = curr->next; // now previous is pointing to null
        curr->next = NULL;
        delete curr; // deleting the current node
    }
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

    // head pointed to node 1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    // passsing the value inside the parameter for the new head
    insertattail(tail, 12);

    print(head);

    // passsing the value inside the parameter for the new head
    insertattail(tail, 15);

    print(head);

    insertinthemiddle(tail, head, 4, 22);
    print(head);

    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;

    deletenode(1, head);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}