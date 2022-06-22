#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){                 // Time complexity ==> O(l), where l is length of the string

    stack<int> st;

    for(int i=s.length()-1; i>=0; i--){         //* In prefix expression we starts from end .. so right to left
        
        if(s[i]>='0' && s[i]<='9'){             // This is to check whether the string have numbers or not 
            st.push(s[i]-'0');                  // -0 bcoz we want them in integer 
        }
        else{
            int op1=st.top();                   // We are storing the rightmost element in the op1 variable //* Difference
            st.pop();
            int op2=st.top();                   // In the same way, we are storing the second rightmost element in op2 variable unlike postfix //* Difference
            st.pop();                           // And popping out from the stack 

            switch (s[i]){                      // To perform operations between two operands, we use switch case
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }
    return st.top();                            // At the end after all calculations we get the topmost element as final Answer
}

int main(){

    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}