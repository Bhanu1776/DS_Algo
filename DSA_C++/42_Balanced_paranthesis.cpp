#include <iostream>
#include <stack>
using namespace std;

//* Imp question in terms of interview perspective ..

//* Algorithm
// In stack first all the opening brackets will be pushed into the stack and closing brackets will stay outside,
// Closing brackets has to be matched with the top element of the stack i.e opening brackets ..
// If every closing bracket present outside the stack matches the top opening bracket of the stack, then the string is balanced!

bool isValid(string s){                         // If string is balanced then it'll return true, else false
    int n = s.size();                           // Storing the length of string in a variable ..

    stack<char> st;
    bool ans = true;                            // Initially assuming true
    
    for(int i=0; i<n; i++){
        if (s[i] == '{' or s[i] == '(' or s[i] == '['){     // If we encounter any opening bracket in the string we will simply push into the stack
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!st.empty() and st.top() == '('){            // comparing the closing bracket with top of the element
                st.pop();                                   // If it matches simply pop, This process will be followed with every kind of bracket
            }
            else{
                ans = false;                                // If closing bracket doesn't matches with the top of element, simply return invalid string
                break;
            }
        }
        else if(s[i] == ']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(!st.empty() and st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()){                            // Corner case 
        return false;
    }
    return ans;
}

int main(){

    string s = "{([])}";                        //* Balanced String
    // string s = "{([]}";                      //* Unbalanced string
    
    if(isValid(s)){
        cout<<"Valid String"<<endl;
    }
    else{
        cout<<"Invalid String"<<endl;
    }
    return 0;
}