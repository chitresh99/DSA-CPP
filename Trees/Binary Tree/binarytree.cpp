#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    { // constructor for creating the node
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data); // calling the constructor

    if (data == -1)
    {
        return NULL;
    }

    // Inserting data in the left side of root
    cout << "Enter the data for inserting in left " <<data<< endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting in right "<<data<<endl; //left because this will be an element below the first left
    root->right = buildTree(root -> right);
    return root;
}

int main()
{

    node* root = NULL;

    // creating a tree
    root = buildTree(root);

    return 0;
}