#include <iostream>
#include <cmath>
using namespace std;

//* Functions :- Function is a piece of code that performs a specific task .. 

// pushed :- when function calls another function pushed(Add) into the stack
// popped :- when specific fucntion terminates it popped(remove) out from stack 

//* Print all the prime numbers between 2 given numbers ..

bool isprime (int num){

    for (int i=2; i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        return true;
    }
}

int main (){

    int a,b,n;
    cout<< "Enter the value of a and b : ";
    cin>> a>> b;  

    for (int i=a; i<=b; i++){
        if (isprime(i)){
            cout<< i << endl;
        }
    }
    return 0;
}

//* Print n terms of fibonacci series using functions 

// void fib(int n){

//     int n1=0;
//     int n2=1;

//     for (int i=1;i<=n; i++){
//         cout<<n1<<endl;
//         int sum = n1+n2;
//         n1=n2;
//         n2=sum;

//     }
// }

// int main (){

//     int n;
//     cout << "Enter the value of n : ";
//     cin>> n;

//     fib(n);

//     return 0;
// }

//* Factorial of n number 

// void fact(int n){

//     int m = 1;
//     for (int i=1; i<=n; i++){
//         m = m*i;
//     }
//         cout<<m<<endl;
// }

// int main(){

//     int n; 
//     cout<< "Enter the value of n : ";
//     cin>> n;

//     fact(n);

//     return 0;
// }

//* nCr === n!/((n-1)! -r!)

// int fact (int n){

//     int m =1;
//     for ( int i = 1 ; i<=n ; i++){
//         m = m*i;            
//     }
//     return m;
// }


// int main(){

//     int n,r;
//     cout << "Enter the value of n and r : ";
//     cin>> n >> r;

//     int ans = fact(n)/((fact(r))*fact(n-r));
//     cout<< ans<<endl;

//     return 0;
// }

