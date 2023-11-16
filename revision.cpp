#include<bits/stdc++.h>
using namespace std;

//? Second Largest Element in an array

int main(){

  int arr[5] = {1,5,2,4,3};

  //* Brute force approach
  // sort(arr, arr+5);
  // if(arr[3]!=arr[4])  cout<<arr[3];          // Not exactly correct tho!
  // else cout<<arr[2];

//* -------------------------------------------------------

  //* Better approach
  // int sLargest = INT_MIN;
  // int largest = arr[0];

  // // First we need to find the largest number
  // for(int i =0; i<5; i++){
  //   if(arr[i]>largest){
  //     largest = arr[i];
  //   }
  // }

  // // Now we will find the second largest number
  // for(int i=0; i<5; i++){
  //   if(sLargest<arr[i] && arr[i]!=largest){
  //     sLargest=arr[i];
  //   }
  // }
  // cout<<sLargest<<endl;

//* -------------------------------------------------------

  //* Optimal Approach

  int largest = arr[0];
  int sLargest = INT_MIN;

  for(int i=0; i<5; i++){
    if(arr[i]>largest){
      sLargest = largest;
      largest = arr[i];
    }
    else if (arr[i]<largest && arr[i]>sLargest){    // In between
      sLargest = arr[i];
    }
  }
  cout<<sLargest;

}