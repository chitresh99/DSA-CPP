#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Creating a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // creating a destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data"
             << " " << value << endl;
    }
};

void insertnode(Node *&tail, int element, int data)
{
    // assuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    // cout<<tail-> data <<" ";

    // while(tail -> next != temp){ // till the next is not equal to temp keep printing
    //    cout<<tail->data<<" ";
    //    tail = tail -> next;
    // }
    // cout<<" ";

    // different approach
    
    //if list is empty
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deletenode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty please check again" << endl;
        return;
    }
    else
    {
        // assuming

        // assuming value is present in the linked list

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        { // till cuurent's data is not equal to the data we gave as input
            prev = curr;
            curr = curr->next; // incrementing current and previous
        }
        prev->next = curr->next; // changing previous's next to current's next

        // 1 Node Linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL; // changing current's next to null basically detaching that element
        delete curr;       // memory free
    }
}

int main()
{
    Node *tail = NULL;

    insertnode(tail, 5, 3);
    print(tail);

    // insertnode(tail, 3, 5);
    // print(tail);

    // insertnode(tail, 5, 7);
    // print(tail);

    // insertnode(tail, 7, 9);
    // print(tail);

    // insertnode(tail, 5, 6);
    // print(tail);

    // insertnode(tail, 9, 10);
    // print(tail);

    // insertnode(tail, 7, 8);
    // print(tail);

    deletenode(tail, 3);
    print(tail);

    return 0;
}