#include <iostream>
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

void sumReplace(Node* root){                    //* Time complexity O(n)
    if(root == NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    
    if(root->left != NULL){                     // Conditional statements for the bottom most nodes(leaves), end nodes cannot get summed 
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}

void preorder(Node* root){                      // This func is to traverse in Binary tree 
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

    preorder(root);
    cout<<endl;
    sumReplace(root);
    cout<<endl;
    preorder(root);

    return 0;
}