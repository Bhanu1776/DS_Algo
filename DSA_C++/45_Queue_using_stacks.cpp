#include <bits/stdc++.h>                        //! This header file has every standard library
using namespace std;

//* Using 2 stacks and deQueue operation costly             -- Approach 1 

//* Algorithm
// For enqueue operation 
//    Push x to stack 1

// For dequeue operation 
// 1) If both stacks are empty then print error.
// 2) If stack 2 is empty
//    while stack1 is not empty, push everything from stack1 to stack2.
// 3) Pop the element from stack2 and return it.

class que{
    stack<int> s1;
    stack<int> s2;                              // In this approach we are going to use two stacks 
    
    public:
    void push(int x){
        s1.push(x);                             // Initially the elements will only get pushed to stack 1
    }
    
    int pop(){
        if(s1.empty() and s2.empty()){          // If both stacks are empty then the queue is empty
            cout<<"Queue is empty\n";
            return -1;
        }
        if(s2.empty()){                         // When stack 2 will be empty we will simply push all the stack1 elements to stack2
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();                  // To print all the elements in stack2
        s2.pop();
        return topval;
    }
    
    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){

    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;

    q.push(5);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}

//* For second approach, refer this video ==> https://youtu.be/iEwX3XA5SDo