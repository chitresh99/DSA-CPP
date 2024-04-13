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
    q.push(NULL);
    while(!q.empty()){ //while queue is not empty
        node* temp = q.front();
        q.pop();

        //To apply stops between each level (presentation purposes)
        if(temp == NULL){//the old level is complete
          cout<<endl;
          if(!q.empty()){//Queue still has some child nodes basically there are some elements
             q.push(NULL);//adding one more seperator if the queue is not empty
          }
        }
        else{
            cout<<temp -> data << " ";
           if(temp -> left){ // the the left of temp is non null push it into queue
            q.push(temp->left);
        }

           if(temp -> right){ // the the right of temp is non null push it into queue
           q.push(temp->right);
        }
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

int main()
{

    node* root = NULL;

    // creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the level order traversal output"<<endl;
    levelOrderTraversal(root);
    
    cout<<"preorder traversal is :"<<endl;
    postorder(root);
    
    return 0;
}
