#include <iostream>
#include <cmath>
using namespace std;

//? Palindrome

int main(){

  int n = 7667;
  int duplicate = n;
  int revNum = 0;

  while(n>0){
    int lastDigit = n%10;
    revNum = (revNum * 10) + lastDigit;
    n = n/10;
  }

  if(duplicate == revNum)
    cout<<"Palindrome";
  else
    cout<<"Not Palindrome";

  return 0;
}