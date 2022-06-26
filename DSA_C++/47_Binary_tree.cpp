#include <iostream>
using namespace std;

//* Binary Tree ==> In binary tree data is stored in Hierarchical form ..
// There are four Properties of Binary tree                             -- written in notebook :)

struct Node{                                    // For Binary tree we are supposed to create nodes 
    int data;                                   // In every node there will be some data stored in it.
    struct Node* left;                          // As in Binary Tree, One node can have only two links that can connect to another sub node  
    struct Node* right;                         // Right and left are the links 

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){

    struct Node* root = new Node(1);            // creating root node
    root->left = new Node(2);                   // from root node linking to new sub nodes in left and right direction 
    root->right = new Node(3);

    /*
        1
       / \
      2   3       */

    root->left->left = new Node(4);             // From children node linking to end nodes
    root->left->right = new Node(5);

    /*
        1
       / \
      2   3 
     / \ 
    4   5            */
    
    return 0;
}