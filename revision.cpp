#include<bits/stdc++.h>
using namespace std;

//? Union of Two sorted Arrays

int main(){

  int arr1[6] = {1,1,2,3,4,5};
  int arr2[6] = {2,3,4,4,5,6};

  //* Brute force approach

  // set<int> mySet;

  // // Step 1) Insert all the arr1 elements in set
  // for(int i =0; i<6; i++){
  //   mySet.insert(arr1[i]);
  // }

  // // Step 2) Insert all the arr2 elements in set
  // for(int j=0; j<6; j++){
  //   mySet.insert(arr2[j]);
  // }

  // int outputArr[mySet.size()] = {};

  // // Step 3) Copy all the set values in the new array
  // copy(mySet.begin(), mySet.end(), outputArr);

  // //? can also use iterator to copy, refer below code
  // // int index = 0;
  // // for(auto& itr: mySet){
  // //   outputArr[index++] = itr;
  // // }

  // for (int i = 0; i < mySet.size(); i++) {
  //   cout << outputArr[i] << " ";
  // }

//* -------------------------------------------------------

  //* Optimal approach

  // Size of both arrays
  int n1 = 6;
  int n2 = 6;

  int i = 0;
  int j = 0;

  vector<int> unionArr;

  while(i<n1&&j<n2){
    if(arr1[i]<=arr2[j]){
      if(unionArr.size()==0 ||unionArr.back() !=arr1[i]){
        unionArr.push_back(arr1[i]);
      }
      i++;
    }
    else{     //agar second array ka element bada hai 1st array ke element se
      if(unionArr.size()==0 ||unionArr.back() !=arr2[j]){
        unionArr.push_back(arr2[j]);
      }
      j++;
    }
  }

  // The case where one array is completely traversed and the other one is remaining

  while(i<n1){
    if(unionArr.size()==0 ||unionArr.back() !=arr1[i]){
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  while(j<n2){
    if(unionArr.size()==0 ||unionArr.back() !=arr2[j]){
      unionArr.push_back(arr2[j]);
    }
    j++;
  }
  

  // Printing union array
  for(auto& element: unionArr){
    cout<<element;
  }
}