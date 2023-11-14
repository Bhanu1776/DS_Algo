#include <iostream>
#include <cmath>
using namespace std;

//? Print all Divisors

int main(){

  int n=36;
  for(int i =1; i<=n; i++){
    if(n%i==0){
      cout<<i<<endl;
    }
  }

  return 0;
}