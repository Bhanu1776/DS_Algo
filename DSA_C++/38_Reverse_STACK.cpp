#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element){                   // Call by reference 
                                                        // To do this insertion at bottom we use 'call Stack', it is a stack where we can store elements temporarily
    if(st.empty()){                             
        st.push(element);                       // If stack is empty push the '4' element
        return;
    }

    int topelement = st.top();                  // Now storing the top element in a 'topelement' variable.. i.e 1,2,3 iteratively
    st.pop();                                   // Popping all the three elements and storing in a call stack
    insertAtBottom(st,element);
    
    st.push(topelement);                        // Finally, The '4' element will be at the bottom and whole stack is reversed now
}

void reverse(stack<int> &st){                   // Call by reference 

    if(st.empty()){                             // If the stack is empty, no need to perform any operations ..
        return;
    }

    int element = st.top();                     // Storing the topmost element in an element variable .. in this case 4
    st.pop();                                   // Removing the '4' element from the stack
    reverse(st);                                // Reversing the other 3 elements in the stack 
    insertAtBottom(st,element);                 // Now, The three elements are reversed and '4' element remained .. 
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // Before reversing a stack : 4 3 2 1

    cout<<"After reversing a stack: ";
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}

//* For better understanding refer this video : https://youtu.be/V2reKQOgE88