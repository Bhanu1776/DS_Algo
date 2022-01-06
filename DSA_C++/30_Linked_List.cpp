#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;                 // node pointer .. "next" which will store the address of next node.

    node(int val){              // Constructor .. which will insert values in node 
        data=val;
        next=NULL;
    }
};

//* Inserting a node at the end of the linked list ..

void InsertAtTail(node* &head, int val){        // Call by reference .. thats why address of head is taken to modify the original head

    node* n = new node(val);            // Creating a new node in which data field will have some values and next field bydefault will be null ..
    
    if(head==NULL){                     // In such case, where not a single node is present in a linked list then,
        head=n;                         // As we created a new node therefore n will be first node and head pointer will point n as the starting node ..
        return;
    }

    node* temp=head;                // "temp" is the last node       

    while(temp->next!=NULL){        // We'll traverse untill the next node becomes NULL
        temp=temp->next;            // To traverse through the linked list 
    }

    temp->next=n;           // Once we reached to last node we'll add new node and last node will become null ..

}

//* Inserting node at the beginning of the Linked List ..

void InsertAtHead(node* &head, int val){        // Call by reference 

    node* n = new node(val);      // Creating a new node to insert at the beginning ..
    n->next=head;                // creating the link between n and n+1
    head=n;                     // Now head will move onto "n" .. bcoz "n" is going to be the first node of the linked list ..
}

//* Deletion in Linked list

void deletion(node* &head, int val){            // Call by reference 

    if(head==NULL){             // In such case where linked list is empty
        return;                 // Further code will not run .. It'll simply return 
    }

    node* temp=head;
    while(temp->next->data!=val){               // n-1th node, nth node is deletion node .. i.e n-1th node is previous node of nth node
        temp=temp->next;
    }

    node* todelete= temp->next;
    temp->next=temp->next->next;         // Chaning link of n-1th element to n+1th element

    delete todelete;
}

//* Deleting the first node of the linked list 
                                                // This is bcoz in normal deletion we can't go back to previous node as the head is the first node
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;            // Moving the head to next postion 

    delete todelete;
}

//* To display the linked list ..

void display(node* head){       // Call by value .. Coz we are not modifiying any node to display ..

    node* temp=head;

    while(temp!=NULL){          // We'll traverse till last node
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//* Searching in a linked list 

bool search(node* head, int key){           // Call by value .. 

    node* temp=head;                // We create temp pointer just to traverse through linked list .. like we cannot traverse through head pointer..
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//* Reversing a linked list by iterative way ..

node* reverse(node* &head){         // This logic will work for all cases .. AND This func will return new node that will be the head ..
                                    // That's the reason func datatype is node rather than void 

    node* prevptr=NULL;             // Previous pointer initilized as a NULL 
    node* currptr=head;             // Current pointer initizied with head
    node* temp;

    while(currptr!=NULL){           // We'll run the loop until current pointer moves to the last node i.e NULL

        temp=currptr->next;      // Assigning the nextptr .. i.e n+1 is the nextptr
        currptr->next=prevptr;      // Changing the links 

        prevptr=currptr;            // moving the postions
        currptr=temp;
    }
    return prevptr;             // This will be the new head
}

//* Reversing a linked list by recursion ..

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){             // In such case where no node OR only one node is present in a linked list, they simply return head
        return head;
    }

    node* newhead= reverseRecursive(head->next);        // Created a new node pointer i.e newhead
    head->next->next=head;          //changing the links
    head->next=NULL;

    return newhead;
}

//* Reversing K nodes in a linked list          ... k=2

node* reversek(node* &head, int k){

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;

    while(currptr!=NULL && count<k){     // For reversing  nodes 

        nextptr=currptr->next;          // Changing the links 
        currptr->next=prevptr;

        prevptr=currptr;                // Exhanged two nodes
        currptr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

int main(){


    node* head=NULL;

    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    cout<<"Inserting node at the end"<<endl;
    display(head);

    cout<<endl;

    InsertAtHead(head, 4);
    cout<<"Inserting node at the beginning"<<endl;
    display(head);

    cout<<endl;

    cout<<"Searching key in a linked list"<<endl;
    cout<<search(head, 5)<<endl;        // Answer will be False(0), coz 5 is not present in a linked list 
    cout<<search(head, 3)<<endl;

    cout<<endl;

    cout<<"Deleting a node"<<endl;
    deletion(head,3);
    display(head);

    cout<<endl;

    cout<<"Deleting first node of the linked list"<<endl;
    deleteAtHead(head);
    display(head);

    cout<<endl;

    cout<<"Reversing a linked list"<<endl;
    node* newhead= reverse(head);
    node* newhead1= reverseRecursive(head);
    display(head);

    cout<<endl;

    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);

    display(head);
    int k=2;
    node* newhead2=reversek(head,k);
    display(newhead);

    return 0;
}