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

void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
} 

void insertattail(Node *&tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail -> prev = tail;
    tail = temp;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    cout << getlength << endl;

    insertathead(head, 11);
    print(head);

    insertattail(tail,12);
    print(head);

    return 0;
}