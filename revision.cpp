#include<bits/stdc++.h>
using namespace std;

//? Left rotate an array by D places

int main(){

  int arr[5] = {1,2,4,3,5};

  //* Brute force approach

  // ITs pretty complex

//* -------------------------------------------------------

  //* Optimal approach

  int d = 2;
  reverse(arr, arr+d);
  reverse(arr+d, arr+5);
  reverse(arr, arr+5);

  for(int i=0; i<5; i++){
    cout<<arr[i];
  }
}