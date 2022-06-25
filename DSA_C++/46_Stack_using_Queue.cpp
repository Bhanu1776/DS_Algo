#include <iostream>
#include <stack>
#include <queue>
using namespace std;

//* Making pop operation costly                 -- method 2

class Stack{
    int N;                                      // N is the size of a stack
    queue<int> q1;
    queue<int> q2;
    
    public:
    Stack(){
        N = 0;
    }

    void pop(){
        if(q1.empty()){
            return;
        }
        while(q1.size() != 1){                  // We will push all the elements from the q1 into q2, except last element!
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.pop();                               // The last element will be popped out ..
        N--;                                    // Now decrementing the size of stack is mandatory!!
        
        queue<int> temp = q1;                   // Now interchanging the values from q2 to q1
        q1 = q2;
        q2 = temp;
    }

    void push(int val){
        q1.push(val);
        N++;                                    // After pushing the element into q1, incrementing the size of a stack is mandatory
    }
    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }

    int size(){
        return N;
    }
};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    cout<<st.top()<<endl;
    st.pop();
    
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    return 0;
}

//* For better understanding, refer this video ==> https://youtu.be/AJCse3XPkrY
//* For method 1 ==> https://youtu.be/FbPIay0KN00