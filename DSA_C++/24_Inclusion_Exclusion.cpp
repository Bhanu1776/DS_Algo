#include <iostream>
using namespace std;

//* Write a program to to Find the numbers which are divisible by 5 and 7 with Inclusion Exclusion principle .. 

int divisible(int n, int a, int b){
    
    int c1=n/a;                     // Here the numbers will generate which are divisible by 5 
    int c2=n/b;                     // Here divisible by 7 numbers will occur 
    int c3=n/(a*b);                 // Now here we will get the numbers which are common like divisible by both 5 and 7

    return c1+c2-c3;                // substraction of c3 bcoz we need to remove common numbers which are divisble by 5 and 7 
}

int main(){

    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;
    return 0;
}