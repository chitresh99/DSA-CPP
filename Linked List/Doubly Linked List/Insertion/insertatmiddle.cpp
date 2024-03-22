#include <iostream>
using namespace std;

// creating a class
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor for first node
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// function to print the data in the linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// function to get the lenght of the linked list
int getlength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len; // that's why we used int so we could return
}

void insertathead(Node* &tail,Node *&head, int data)
{
    if (head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;

    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node *&tail,Node* &head, int data)
{
   if (tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
        head = temp;

    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertinthemiddle(Node *&tail, Node *&head, int position, int data)
{
    // if we want to insert at first position
    if (position == 1)
    {
        insertathead(tail,head, data);
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
        insertattail(tail,head,data);
        return;
    }

    // creating a new node for a new data
    Node *nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next; // setting the node to insert's next to temp's next

    temp->next->prev = nodetoinsert;

    temp->next = nodetoinsert;

    nodetoinsert->prev = temp;
}

int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    cout << getlength << endl;

    insertathead(tail,head, 11);
    print(head);

    insertattail(tail,head,12);
    print(head);

    insertinthemiddle(tail, head, 3, 13);
    print(head);

    return 0;
}