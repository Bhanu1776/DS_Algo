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

void display(node* head){   

    node* temp=head;

    while(temp!=NULL){   
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void intersect(node* &head1, node* &head2, int pos){

    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }

    temp2->next=temp1;
}

int lenght(node* head){

    int l=0;
    node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

int intersection(node* &head1, node* &head2){         // Head 1 will be on 1st LL, and Head 2 will be on 2nd LL
                                                     // function is initilized with int bcoz, at the end we'll get data of the intersecting node ..                                                           
    int l1 = lenght(head1);
    int l2 = lenght(head2);

    int d=0;
    node* ptr1;         // Pointer 1 will run through 1st linked list
    node* ptr2;         // pointer 2 will run through 2nd linked list

    if(l1>l2){          // If first ll is greater than second ll 
        d=l1-l2;
        ptr1=head1;     
        ptr2=head2;
    }
    else{               // If second ll is greaer than first ll
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){               // d will be the corresponding point where the 1st and 2nd LL will have equal distance from point of intersection 
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;      // This is the check, If only single linked list is present then return -1 
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){

        if(ptr1==ptr2){         // At the point of intersection that node data will be return 
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

int main(){

    node* head1=NULL;
    node* head2=NULL;

    InsertAtTail(head1, 1);         // First Linked list 
    InsertAtTail(head1, 2);
    InsertAtTail(head1, 3);
    InsertAtTail(head1, 4);
    InsertAtTail(head1, 5);
    InsertAtTail(head1, 6);
    
    InsertAtTail(head2, 9);         // Second Linked list
    InsertAtTail(head2, 10);

    intersect(head1, head2, 3);     // 3 will be the point of intersection ..
    display(head1);
    display(head2);

    cout<<intersection(head1, head2);
    
    return 0;
}