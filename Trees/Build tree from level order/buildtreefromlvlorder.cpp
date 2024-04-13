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
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}

void postorder(node* root){ //passing root inside the function
    //base case
    if(root == NULL){
        return;
    }
    
    postorder(root->right);
    postorder(root->left);//calling left
    cout<< root -> data << " " ;

}

void buildtreefromlevelorder(node* &root){
    //creating a new node
    queue<node*> q;
    cout<<"enter data for root"<<endl;//collecting data from root
    int data;
    cin >> data; // Read the data for the root node
    root = new node(data);
    q.push(root);

    while(!q.empty()){
       node* temp = q.front(); 
       q.pop();

       cout<<"Enter left node for:"<<temp -> data<<endl;
       int leftData;
       cin>>leftData;

       if(leftData != -1){
        temp -> left = new node(leftData);
        q.push(temp->left);
       }

       cout<<"Enter right node for:"<<temp-> data<<endl;
       int rightData;
       cin>>rightData;

       if(rightData != -1){
        temp -> right = new node(rightData);
        q.push(temp->right);
       }
    }
}

int main()
{

    node* root = NULL;

    // // creating a tree
    // root = buildTree(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<<"Printing the level order traversal output"<<endl;
    // levelOrderTraversal(root);
    
    // cout<<"preorder traversal is :"<<endl;
    // postorder(root);

    buildtreefromlevelorder(root);
    levelOrderTraversal(root);
    
    return 0;
}
