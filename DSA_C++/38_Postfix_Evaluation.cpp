#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){                 // Time complexity ==> O(l), where l is length of the string

    stack<int> st;

    for(int i=0; i<s.length(); i++){            //* In postfix expression we goes from left to right in a string
        
        if(s[i]>='0' && s[i]<='9'){             // This is to check whether the string have numbers or not 
            st.push(s[i]-'0');                  // -0 bcoz we want them in integer 
        }
        else{
            int op2=st.top();                   // We are storing the leftmost element in the op2 variable here unlike prefix evaluation //* Difference 
            st.pop();
            int op1=st.top();                   // In the same way, we are storing the second leftmost element in op1 variable //* Difference
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

    cout<<prefixEvaluation("46+2/5*7+")<<endl;
    return 0;
}

//* 46+2/5*7+ ==> ( ( ( 4 + 6 ) / 2 ) * 5 ) + 7