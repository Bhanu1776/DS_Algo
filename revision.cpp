#include <iostream>
#include <cmath>
using namespace std;

//? Amstrong Number

int main(){

  int n = 371;
  int copy = n;
  int count = int(log10(n)+1);
  int amstrongNum = 0;

  while(n>0){
    int lastDigit = n%10;
    amstrongNum = amstrongNum + pow(lastDigit, count);
    n=n/10;
  }
  if(amstrongNum == copy)
    cout<<"Yes Amstrong";
  else
    cout<<" Not an Amstrong Number";

  return 0;
}