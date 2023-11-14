#include <iostream>
#include <cmath>
using namespace std;

//? Count the digits

int main(){

  //* Approach one
  int n = 7789;
  int count = 0;
  while(n>0){
    count++;
    n = n/10;
  }
  cout<<count<<endl;

  //* Approach two
  int m = 7789;
  int cnt = (int)(log10(m)+1);
  cout<<cnt<<endl;
  return 0;
}