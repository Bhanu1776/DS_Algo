#include <iostream>
using namespace std;

//* Implementation of Queue using Linked list

class node{                                     // Defining node 
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{                                    // Defining Queue
    node* front;
    node* back;
    
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    
    void push(int x){
        node* n = new node(x);                  // Pushing the node

        if(front==NULL){                        // pointing the front and back when first node is created 
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front == NULL){                      // If the Linked list is empty, we can't remove any node
            cout<<"Queue underflow"<<endl;
            return;
        }
        
        node* todelete=front;                   // First storing the front element in todelete variable, to actually delete
        front=front->next;                      // pointing the front pointer to the next node
        
        delete todelete;                        // And finally deleted the front node
    }

    int peek(){
        if(front == NULL){
            cout<<"No element in Queue"<<endl;
            return -1;
        }
        return front->data;                     // Printing the front node data
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<endl;
    cout<<q.empty()<<endl;

    return 0;
}