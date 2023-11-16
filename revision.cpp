#include<bits/stdc++.h>
using namespace std;

//? Largest Element in an Array

int main(){

  int arr[5] = {1,5,2,4,3};

  //* Brute Force Approach
  // sort(arr, arr+5);     // Sort function takes 2 args (first element address, last element address)
  // cout<<arr[4]<<endl;


  //* Optimal Approach
  int largestElement = arr[0];
  for(int i=0; i<5; i++){
    if(arr[i]>largestElement) largestElement=arr[i];
  }
  cout<<largestElement;

}