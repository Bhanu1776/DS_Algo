#include<bits/stdc++.h>
using namespace std;

//? Check if an array is sorted or not! - no descending order

int main(){

  int arr[5] = {1,1,2,3,3};

  for(int i =0; i<5; i++){
    if(arr[i]>arr[i-1]);    // Comparing with previous element
    else return false;
  }
  return true;
}