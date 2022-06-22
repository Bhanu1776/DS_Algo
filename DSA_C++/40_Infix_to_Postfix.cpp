#include <iostream>
#include<stack>
using namespace std;

//* Refer Algorithm for better understanding .. written in notebook :)

int prec(char c){                               // First we will check the precedence among all operators 

    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixtoPostfix(string s){

    stack<char> st;
    string res;                                 // Result to store the final string

    for(int i=0; i<s.length(); i++){            // To traverse in the string

        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){

    cout<<infixtoPostfix("(a-b/c)*(a/k-l)");
    return 0;
}