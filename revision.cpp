#include<bits/stdc++.h>
using namespace std;

//? Intersection of Two sorted Arrays

int main(){

  int arr1[6] = {1,1,2,3,4,5};
  int arr2[6] = {2,3,4,4,5,6};

  //* Brute force approach

  // No brute force solution 😂

//* -------------------------------------------------------

  //* Optimal approach

  int i = 0;
  int j = 0;

  // Size of both arrays
  int n1 = 6;
  int n2 = 6;

  vector<int> outputArray;

  while(i<n1 && j<n2){
    if(arr1[i]<arr2[j])   i++;
    else if(arr2[j]<arr1[i])    j++;
    else{
      outputArray.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  //Printing the output
  for(auto& element: outputArray){
    cout<<element;
  }
  
}