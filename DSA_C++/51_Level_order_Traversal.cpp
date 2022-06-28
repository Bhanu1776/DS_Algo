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

//* Level Order Traversal in Binary Tree

void printLevelOrder(Node* root){
    
    if(root == NULL){                           // If Binary tree is empty return 
        return;
    }
    queue<Node*> q;                             // Declaring a queue with Node pointer
    q.push(root);                               // Firstly we will push root node into queue
    q.push(NULL);                               // They we will simply push NULL.

    while(!q.empty()){                          // Until the queue becomes empty we perform some operations
        Node* node = q.front();                 // In queue every time we will pop front element present in queue 
        q.pop();

        if(node!=NULL){                         // After popping that element we will see, whether the node has left and right subtree or not
            cout<<node->data<<" ";              // For every node we will print the node value
            if(node->left){                     // For that corresponding node if left subnode is present, we will push into queue
                q.push(node->left);
            }
            if(node->right){                    // In the same way if right subnode is present we will push into queue
                q.push(node->right);
            }
        }
        else if(!q.empty()){                    // After every queue gets empty. that time push NULL
            q.push(NULL);                       // Once the traversal is complete at the end NULL will be present and we will have all the nodes printed
        }
    }
}

//* Sum at kth level in Binary Tree

int sumAtK(Node* root, int K){                  // This func is to find the sum of all nodes present at the kth level 
    if(root == NULL){                           // If binary tree is empty simply we will return -1, that means we cannot add node values
        return -1;
    }

    queue<Node*> q;                             // This process is same as level order sum
    q.push(root);
    q.push(NULL);
    int level = 0;                              // In this sum, we will keep a track of which level we are traversing
    int sum = 0;                                // Initially the sum pointer would be 0
    
    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node != NULL){
            if(level == K){                     // If k is equals to level of binary tree, then simply sum the node data present in that level
                sum+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){                    // Once the queue get empty for that certain level, we will push null and move on to next level
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //* Level order Traversal
    printLevelOrder(root);
    cout<<endl;
    
    /*
            1
          /   \
         2     3
        / \   / \
       4  5  6  7          */

    //* Sum at Kth Level
    cout<<"The sum of kth node is: ";
    cout<<sumAtK(root, 2)<<endl;

    return 0;
}