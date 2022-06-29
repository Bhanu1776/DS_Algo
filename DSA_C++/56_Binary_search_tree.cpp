#include <iostream>
using namespace std;                            //* Binary search Tree ==> Time complexity : O(log n)

struct Node{                                    // In BST, Structure of Node is as same as Binary tree
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){           // This func is to insert node in the BST
    if(root == NULL){                           // Base condition : If no node is present, create a new node with that value
        return new Node(val);
    }

    if(val < root->data){                       // As the rule of BST, the left subtree node values has to be less than the root node value
        root->left = insertBST(root->left,val);
    }
    else{                                       // In the same way, the right subtree node value has to be greater than the root node value
        root->right = insertBST(root->right,val);
    }
    return root;                                // At the end return the node, Do note: Func return type is Node*
}

void inorder(Node* root){                       // To print the BST, we use Inorder Traversal -- Has an advantage over other traversals .. check last line
    if(root == NULL){
        return;
    }
    inorder(root->left);                        // As in Inorder traversal, we print first Left subtree, Root, Right subtree
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node* root = NULL;
    root = insertBST(root, 5);                  // Initially we have to set the root node value, So in this case its 5
    insertBST(root, 1);                         // Inserting node values in BST will build a proper BST
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    // print inorder
    inorder(root);
    cout<<endl;
    return 0;
}

//* Property ==> Binary Search Tree inorder Traversal always gives sorted order values