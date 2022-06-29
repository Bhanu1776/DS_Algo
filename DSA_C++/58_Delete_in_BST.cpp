#include <iostream>
using namespace std;

//* For Better understanding refer Handwritten notes !!

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

Node* inorderSucc(Node* root){                  // This func is to find the inorder successor of the current root node
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key){
                                                // This will cover the case 1 an case 2
    if(key < root->data){                       // If key value is less then root, Traverse through left subtree, and delete node with the help of case conditions
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){                  // If key value is greater then root, Traverse through right subtree, and delete node with the help of case conditions
        root->right = deleteInBST(root->right, key);
    }
    else{
        if(root->left == NULL){                 // If root->left node is null, then store the right node value in temp and delete the root node, then simply place temp node value in the place deleted node
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){           // Same for root->right node
            Node* temp = root->left;
            free(root);
            return temp;
        }
                                                // For Case 3
        Node* temp = inorderSucc(root->right);  // To delete the node those who have two child nodes, First find the inorder successor of that node
        root->data = temp->data;                // Store the inorder successor node in temp node, and delete the inorder successor node and place temp node in the place of ToDelete root node
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root){                       // To print the BST traverse through BST in inorder way
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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

    inorder(root);
    cout<<endl;
    root = deleteInBST(root, 5);
    inorder(root);
    cout<<endl;
    return 0;
}

//* Video link ==> https://youtu.be/kU9Lv3e_kxs