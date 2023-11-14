#include <iostream>
#include <cmath>
using namespace std;

//? GCD = Greatest common divisor

int main(){

  int a =52, b = 10;

  while(a>0 && b>0){
    if(a>b) a=a%b;
    else    b=b%a;
  }
  if(a==0)  cout<<b;
  else      cout<<a;

  return 0;
}