#include <iostream>
using namespace std;

//* Inline function ==> Whenever we are writing single line of statement inside function then prerfer inline func.
// It increases the performance as the main advantage is :
// No extra memory usage for storing function, and no function call overide 
// In simple words what inline func does is - Before compilation of code the one line statement get attached to the func call space, i.e after compilation there is no such function
// When to use => compiler will only allow if lines of code is less than three!

inline int getMax(int& a,int& b){               //! inline keyword
    return (a>b) ? a : b;
}

//* Default arguments
int getMin(int a, int b, int c=0){          // Here in c i've declared a value in paramenters itself, in such case where in func call at line 22 if we don't provide c value then it'll take 0
    return (a<b) ? a : b;
}              

int main(){

    int a = 1, b =2, int c = 7;
    int ans = 0;

    ans = getMax(a,b);                          

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout<<endl;

    // Default args
    ans = getMin(a,b);                    // Here for Default args i'm not passing C value, the func gonna take the parameter value

    cout<<ans<<endl;

    //* const keyword in cpp
    // When declared with const keyword => We cannot change the value of RollNo throughout the program
    //? Note: Allways declare values while initialization, else it'll assign garbage value and that can never be changed!
    const RollNo = 7;

    return 0;
}