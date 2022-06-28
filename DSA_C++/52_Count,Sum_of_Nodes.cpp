#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//* Count of all nodes in a Binary Tree

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

//* Sum of all nodes in a Binary Tree

int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}


int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

        /*
            1
          /   \
         2     3
        / \   / \
       4  5  6  7          */

    //* Count of all nodes in a Binary Tree
    cout<<"The count of nodes in a Binary Tree: ";
    cout<<countNodes(root)<<endl;
    
    //* The sum of all nodes in a Binary Tree
    cout<<"The sum of all Nodes: ";
    cout<<sumNodes(root)<<endl;

    return 0;
}