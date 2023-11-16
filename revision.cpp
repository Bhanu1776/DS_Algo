#include<bits/stdc++.h>
using namespace std;

//? Move zeros to end

int main(){

  int arr[5] = {1,0,0,2,0};

  //* Brute force approach

  // 1) Move non zero elements into temp array
  // int temp[5] = {};
  // int nonZeroCount = 0;

  // for (int i = 0; i < 5; i++) {
  //   if (arr[i] != 0) {
  //       temp[nonZeroCount++] = arr[i];
  //   }
  // }

  // // 2) Fill remaining elements of arr with zeros
  // for (int i = nonZeroCount; i < 5; i++) {
  //   arr[i] = 0;
  // }

  // // 3) Copy elements from temp array to arr
  // for (int i = 0; i < nonZeroCount; i++) {
  //   arr[i] = temp[i];
  // }

  // // Print the modified array
  // for (int i = 0; i < 5; i++) {
  //   cout << arr[i] << " ";
  // }


//* -------------------------------------------------------

  //* Optimal approach

  int j = -1;

  // Step 1) Finding the index of the first occurrence of 0
  for(int i = 0; i<5; i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }

  // Step 2) If 0 is found in the array
  if(j!=-1){
    for(int i =j+1; i<5; i++){
      if(arr[i]!=0){
        swap(arr[i], arr[j]);
        j++;
      }
    }
  } 

  // Printing the modified array
  for(int i =0; i<5; i++){
    cout<<arr[i];
  }
  
}