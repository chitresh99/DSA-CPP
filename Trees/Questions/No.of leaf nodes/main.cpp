/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
// void inorder(BinaryTreeNode<int>* root, int &count){ //passing root inside the function
//     //base case
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left,count);//calling left
    
//     //checking the condition for leaf node
//     if(root->left==NULL && root->right==NULL){
//         count++;
//     }

//     inorder(root->right,count);
// }
// //cout++ here is for the number of leaf nodes

// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int count = 0;
//     inorder(root,count);
//     return count;
// }

//question link :- https://www.naukri.com/code360/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=PROBLEM