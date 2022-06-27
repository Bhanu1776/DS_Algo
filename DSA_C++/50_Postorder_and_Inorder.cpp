#include <iostream>
using namespace std;

//* Build Tree from Postorder and Inorder
// Algorithm written in book

struct Node{                                    // Structure of a node for Binary trees
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int search(int inorder[], int start, int end , int val){   // This func will search preorder index value in inorder array and will return the value position
    for(int i=start; i<=end; i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int start, int end){             // Start and end will point the values in inorder array
    static int idx = 4;                         //* Diff: Now in postorder, The index position will start from end, bcoz root node in preorder always present at last
                                                // Static Variable uses: https://www.geeksforgeeks.org/static-keyword-cpp/#:~:text=Static%20variables%20in%20a,the%20next%20function%20call.
    if(start>end){                              // Base case: if no value is present in inorder array simply return NULL        
        return NULL;
    }

    int val = postorder[idx];                   // Storing the index pointer value in current variable
    idx--;                                      // Firstly incrementing the pointer by +1
    Node* curr = new Node(val);                // And then creating the node for that value
    
    if(start == end){                           // Corner case: If in case in inorder array only one value is present that time return the node itself..
        return curr;
    }

    int pos = search(inorder, start, end, val);                // Now we will search the index value from preorder array, in inorder order array and we will store that value position in pos variable
    curr->right = buildTree(postorder, inorder, pos+1, end);   // Diff 
    curr->left = buildTree(postorder, inorder, start, pos-1);  // Diff
                                                               //* Flow has to be in this order only .. First Right then Left
    return curr;                                // At the end we will return the node
}

void inorderPrint(Node* root){                  // This function is to print the inorder array
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);                   // In inorder : Left subtree,root, Right subtree
    cout<< root-> data << " ";
    inorderPrint(root->right);
}

int main(){

    int postorder[] = {4,2,5,3,1};               // Preorder array
    int inorder[] = {4,2,1,5,3};                // Inorder array

    // Build tree
    Node* root = buildTree(postorder, inorder,0,4);          // 0 is the start pos and 4 is the end pos .. to iterate through array
    inorderPrint(root);

    return 0;
}

//* To understand this concept graphically refer this video ==> https://youtu.be/PJX9T2oVKmk?t=187

// Good Question :) 

// Is it possible to create binary tree with the help of Preorder and Postorder
// Ans: It is not possible to construct a general Binary Tree from preorder and postorder traversals.
//      But if know that the Binary Tree is Full, we can construct the tree without ambiguity.