#include <iostream>
using namespace std;

//* Build Tree from Preorder and Inorder
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


int search(int inorder[], int start, int end , int curr){   // This func will search preorder index value in inorder array and will return the value position
    for(int i=start; i<=end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end){             // Start and end will point the values in inorder array
    static int idx = 0;                         // Static index is created which will point the values in preorder array
                                                // Static Variable uses: https://www.geeksforgeeks.org/static-keyword-cpp/#:~:text=Static%20variables%20in%20a,the%20next%20function%20call.
    if(start>end){                              // Base case: if no value is present in inorder array simply return NULL        
        return NULL;
    }

    int curr = preorder[idx];                   // Storing the index pointer value in current variable
    idx++;                                      // Firstly incrementing the pointer by +1
    Node* node = new Node(curr);                // And then creating the node for that value
    
    if(start == end){                           // Corner case: If in case in inorder array only one value is present that time return the node itself..
        return node;
    }
    int pos = search(inorder, start, end, curr);                // Now we will search the index value from preorder array, in inorder order array and we will store that value position in pos variable
    node->left = buildTree(preorder, inorder, start, pos-1);    // Now simply we will build the Left subtree and we are taking the values from inorder array in left side of indexed value
    node->right = buildTree(preorder, inorder, pos+1, end);     // In the same way we will build right subtree from the right side of indexed position in inorder array
                                                                // Flow has to be in this order only .. First Left then Right
    return node;                                // At the end we will return the node
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

    int preorder[] = {1,2,4,3,5};               // Preorder array
    int inorder[] = {4,2,1,5,3};                // Inorder array

    // Build tree
    Node* root = buildTree(preorder, inorder,0,4);          // 0 is the start pos and 4 is the end pos .. to iterate through array
    inorderPrint(root);
    
    return 0;
}

//* To understand this concept graphically refer this video ==> https://youtu.be/HJKoNLGRnYk?t=177