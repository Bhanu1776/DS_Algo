#include<bits/stdc++.h>
using namespace std;

//? Pow(x, n)

double myPow(double x, int n) {
    long int power = n;
    double ans = 1.0;

    if(n<0) power *= -1;            // If the given number is negative, make it positive

    while(power!=0){
        if(power%2){                // If power is even
            ans *= x;
            power--;
        }
        else{                       // If power is odd
            x *= x;
            power/=2;
        }
    }
    if(n<0) ans = 1.0/ans;          // If power is negative we making it positive

    return ans;                     //* Time complexity is: O(log n)
}

int main(){

  double x = 2.00000;
  int n = 10;

  //* Brute force approach

  // No brute force soln

//* -------------------------------------------------------

  //* Optimal approach 

  double output = myPow(x, n);
  cout<<output;

}