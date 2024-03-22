#include <iostream>
using namespace std;


// Creating a node class
class Node{
    public:
    int data;
    Node* next;

    //creating a new node via a constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};


int main() {
    
    //creating a new node and later we also passed a value 10 
    Node* node1 = new Node(10);
    
    //printing the address of the new node
    cout << node1 -> data << endl;

    //printing the address of the next node 
    cout << node1 -> next << endl;
    
    return 0;

}