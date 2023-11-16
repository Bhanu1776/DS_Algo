#include<bits/stdc++.h>
using namespace std;

//? Remove Duplicates in-place from sorted array

int main(){

  int arr[5] = {1,2,3,3,5};

  //* Brute force approach

  // // Creating a set
  // set<int> mySet;

  // for(int i = 0; i<5; i++){
  //   mySet.insert(arr[i]);
  // }

  // //Using Iterator, Transferring all the set values into an OG array
  // int index=0;
  // for(auto& element: mySet){
  //   arr[index++] = element;
  // }

  // //Printing the array values
  // for(int i = 0; i<4; i++){
  //   cout<<arr[i];
  // }
  

//* -------------------------------------------------------

  //* Better approach

  int i = 0;
  for(int j =1; j<5; j++){
    if(arr[i]!=arr[j]){
      arr[i+1] = arr[j];
      i++;
    }
  }
  cout<<"Size of a final array"<<i+1<<endl;
  
}