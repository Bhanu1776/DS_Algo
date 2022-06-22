#include <iostream>
#include<stack>                                 //! Important, If we want to use stack built in functions
using namespace std;

//* This is one of the applications of stack, i.e Reversing a sentence or string with the help of STACK Data structure ..

void reverseSentence(string s){

    stack<string> st;                           //* Declaring a stack named st with data type of string

    for(int i=0; i<s.length(); i++){            // Traversing through string

        string word = "";                       // Declaring a string word where we can store each and every word present in the string
        while(s[i]!=' ' && i<s.length()){       
            word+=s[i];                         // Storing every word in a word variable iteratively
            i++;
        }
        st.push(word);                          // Pushing every words in the stack 
    }
    
    while(!st.empty()){                         // To print the stack in reverse order
        cout<<st.top()<<" ";
        st.pop();                               // This is imp!! After changing the top pointer in every iteration, elements has to be popped out!
    }
    cout<<endl;
}

int main(){

    string s = "Hey, how are you doing?";
    reverseSentence(s);
    return 0;
}