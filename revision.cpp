#include <iostream>
#include <cmath>
using namespace std;

//? Reverse the number

int main(){

  int n = 7789;
  int revNum = 0;
  while(n>0){
    int lastDigit = n%10;
    revNum = (revNum * 10) + lastDigit;
    n = n/10;
  }
  cout<<revNum<<endl;
  return 0;
}