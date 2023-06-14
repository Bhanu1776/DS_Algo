#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  
  Node(int val){
      data = val;
      next = NULL;
  }
};

void InsertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    
    newNode->next = head;
    head = newNode;
}

void InsertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(head==NULL){
        head = newNode;
        return;
    }
    
    Node* temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void InsertAtPosition(Node* &head,int position, int val){
    Node* newNode = new Node(val);
    
    if(head==NULL){
        head=newNode;
        return;
    }
    
    Node* temp = head;
    int count = 1;
    
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
} 

void print(Node* &head){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void Deletion(Node* &head, int position){
    
  
    
   if(position == 1){
       Node* temp = head;  
       head = head->next;
       temp->next = NULL;
       delete temp;
   }
   
   Node* curr = head;
   Node* prev = NULL;
   
   int cnt = 1;
   while(cnt < position){
       prev = curr;
       curr = curr->next;
       cnt++;
   }
   
   prev->next = curr->next;
   curr->next = NULL;
   delete curr;
   
}

int main() {
    
    Node* node1 = new Node(10);
    
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;
    
    Node* head = node1;
    
    InsertAtHead(head, 13);
    InsertAtHead(head, 15);
    
    InsertAtEnd(head, 17);
    InsertAtEnd(head, 18);
    print(head);   
    
    InsertAtPosition(head, 2, 14);
    InsertAtPosition(head, 4, 16);
    print(head);
    
    Deletion(head, 3);
    print(head);

    return 0;
}