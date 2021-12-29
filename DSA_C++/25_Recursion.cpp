#include <iostream>
using namespace std;

//* Recursion :- When a function calls itself to make the problem smaller is known as Recursion ..

//* Write a program to add all numbers till n using recursion ..

// int sum(int n){

//     if(n==0){                   // whenever n will become 0, the function will be terminate ..
//         return 0;
//     }

//     int prevsum = sum(n-1);     // here function will will itself 
//     return n+prevsum;           n = n + sum till n-1
// }

// int main(){

//     int n;
//     cin>>n;

//     cout<<sum(n)<<endl;
//     return 0;
// }

//* Write a program to calculate n raised to power of p 

// int power(int n, int p){

//     if(p==0){
//         return 1;       // it will return 1, bcoz any term raised to 0 always gives 1 ..
//     }

//     int prevpower = power(n, p-1);
//     return n*prevpower;        // n raised to p = n*n raised to p-1
// }

// int main(){

//     int n, p;
//     cin>>n>>p;

//     cout<<power(n,p)<<endl;
//     return 0;
// }

//* Write a program to find the factorial of a number n using recursion ..

// int factorial(int n){

//     if(n==0){
//         return 1;
//     }

//     int prevfact = factorial(n-1);
//     return n*prevfact;              // n! = n*(n-1)!
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<factorial(n)<<endl;
// }


//* Write a program to print the nth Fibonacci number using Recursion 

int fib(int n){

    if(n==0 || n==1){       // fib(0)=0 And fib(1)=1
        return n;
    }

    return fib(n-1)+fib(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<fib(n)<<endl;
}
