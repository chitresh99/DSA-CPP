#include <iostream>
#include <queue>
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

void levelOrderTraversal(node* root){
    queue<node*> q; //in level order traversal most of the time we use breadth first search
    q.push(root); //pushing a root element in the queue basically pushing an element

    while(!q.empty()){ //while queue is not empty
        node* temp = q.front();
        cout<<temp -> data << " ";
        q.pop();
        
        if(temp -> left){ // the the left of temp is non null push it into queue
         q.push(temp->left);
        }

        if(temp -> right){ // the the right of temp is non null push it into queue
         q.push(temp->right);
        }
    }
}

int main()
{

    node* root = NULL;

    // creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the level order traversal output"<<endl;
    levelOrderTraversal(root);

    return 0;
}