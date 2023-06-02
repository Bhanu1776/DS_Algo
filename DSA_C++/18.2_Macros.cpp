#include <iostream>
using namespace std;

//* Macro is a piece of code in a program that is replaced by a value of macro.

#define PI 3.14             // This is how we create macros


int main(){

    int r = 5;
    double area = PI * r * r;
    cout<<area<<endl;

    return 0;
}

//* To know more about macro and its types refer ==> https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/