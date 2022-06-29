#include <iostream>
using namespace std;

struct Node{                                    
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchInBST(Node* root, int key){

    if(root == NULL){                           // Base condition : If no node in present in BST return NULL
        return NULL;
    }

    if(root->data == key){                      // If the key value == root then return root .. top condition
        return root;
    }
    if(root->data > key){                       // If key value is smaller than root value, search value in left subtree ..
        return searchInBST(root->left,key);
    }

    return searchInBST(root->right, key);       // Or else, Traverse through right subtree and search the value  -- where value is greater than root
}

int main(){

    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    
    /*      Binary Search Tree

                4
               / \
              2   5
             / \   \
            1   3   6           */

    
    if(searchInBST(root, 5) == NULL){
        cout<<"key doesn't exist";
    }
    else{
        cout<<"key exists"<<endl;
    }
    return 0;
}