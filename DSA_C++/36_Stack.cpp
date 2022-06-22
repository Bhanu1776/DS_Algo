#include <iostream>
using namespace std;

//* Stack ==> Stores a list of items in which an item can be added to or removed from the list only at one end ..
// Follows the LIFO principle .. Last in First out
// Time complexity is 0(1)

#define n 100                                  // Assuming the size of an array is 100

class stack{

    int* arr;
    int top;
    
    public:
    stack(){
        arr = new int[n];                       // Declaring an array of size n 
        top=-1;                                 // Initially the top will point to no element .. so -1
    }

//* Operations to perform in a stack 

    void push(int x){

        if(top==n-1){                           
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;                                  // While adding elements we will increment the top to point on the topmost element
        arr[top]=x;                             // After incrementing we will simply add our elements at the top of the stack
    }

    void pop(){

        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;                                  // To remove elements from the stack we will simply decrement the top ..
                                                // In this case, We are not going to remove the array elements, only decrementing the top will work fine
    }

    int Top(){

        if(top==-1){
            cout<<"No element in the stack"<<endl;
            return -1;
        }

        return arr[top];                        // The topmost element of an array will be the top element
    }

    bool empty(){
        return top==-1;                         // If the stack is empty it'll return True, else False
    }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;

    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();

    cout<<st.empty()<<endl;

    return 0;
}