#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;                

    node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtTail(node* &head, int val){

    node* n = new node(val);
    
    if(head==NULL){         
        head=n;             
        return;
    }

    node* temp=head;        

    while(temp->next!=NULL){
        temp=temp->next;    
    }

    temp->next=n;     

}

//* Floyd's Cycle detection Algorithim (Hare and tortoise method) [Without map]

void makeCycle(node* &head, int pos){       // This will create a cycle in a linked list .. where one node will have to linkings 
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){

        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head){

    node* slow=head;            // Tortoise
    node* fast=head;            // Hare

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;                    // Whenever tortoise moves one step that time hare moves 2 steps 
        fast=fast->next->next;

        if(fast==slow){                 // When both hare and tortoise meet at same node that time we can say Cycle in a linked list is present
            return true;
        }
    }
    return false;
}

//* Floyd's Cycle Removal Algorithim

void removeCycle(node* &head){
    
    node* slow=head;            // At the initial stage both will start from head
    node* fast=head;

    do{
        slow=slow->next;            // Tortoise will take one step further 
        fast=fast->next->next;      // While Hare will take two steps further 
    }while(slow!=fast);

    fast=head;                      // Now hare will move to start point i.e head
    while(slow->next!=fast->next){      // After this when tortise and hare will meet at specific node from that node links has to break ..
        slow=slow->next;
        fast=fast->next;
    }
    
    slow->next=NULL;                // At that node the tortoise node will point to null .. so that cycle will break 
}

//* To display the linked list ..

void display(node* head){

    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;    
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    
    makeCycle(head, 3);             // This will create cycle at 3rd node ..
    cout<<detectCycle(head)<<endl;  // IF cycle present = 1 , not = 0
    
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

    return 0;
}