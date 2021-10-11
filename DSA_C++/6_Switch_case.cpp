#include <iostream>
using namespace std;

//* IMPLEMENT A SIMPLE CALCULATOR USING SWITCH CASE !

// int main(){

    // float a, b;
    // cout<< "Enter the value of a and b: ";
    // cin>>a>>b;

    // char op;
    // cout<< "Enter any operation: ";
    // cin>>op;

// switch(op)
//     {
//         case '+':
//             cout<<a+b<<endl;
//             break;
//         case '-':
//             cout<<a-b<<endl;
//             break;
//         case '*':
//             cout<<a*b<<endl;
//             break;
//         case '/':
//             cout<<a/b<<endl;
//             break;
        
//         default :
//             cout<<"Enter valid operator"<<endl;
//     }
    // return 0;
// }


//* Write a program to find whether an alphabet is a vowel or a consonant.

// int main(){

//     char op;
//     cout<<"Enter any alphabet: ";
//     cin>>op;

//     switch (op){

//     case 'a':
//         cout<<"It is a vowel";
//         break; 
//     case 'e':
//          cout<<"it is a vowel";
//         break; 
//     case 'i':
//          cout<<"It is a vowel";
//         break;
//     case 'o':
//          cout<<"It is a vowel";
//         break;
//     case 'u':
//          cout<<"It is a vowel";
//         break;
//     default :
//         cout<<"It is not a vowel";
//         break;
//     }
//     return 0;
// }

int main(){

    int n;
    cout<<"Enter any number from 1 to 10: ";
    cin>>n;

    switch (n){

        case 1:
            cout<<"a";
            break;
        case 2:
            cout<<"b";
            break;
        case 3:
            cout<<"c";
            break;
        case 4:
            cout<<"d";
            break;
        case 5:
            cout<<"e";
            break;
        case 6:
            cout<<"f";
            break;
        case 7:
            cout<<"g";
            break;
        case 8:
            cout<<"h";
            break;
        case 9:
            cout<<"i";
            break;
        case 10:
            cout<<"j";
            break;
        default :
            cout<<"Not in Range !!";
    }
    return 0;
}