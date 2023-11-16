#include<bits/stdc++.h>
using namespace std;

//? Reversing an array

int main(){

  int arr[5] = {1,2,4,3,5};

  //* Brute force approach

  // No brute force :)

//* -------------------------------------------------------

  //* Optimal approach

    int start = 0;
    int end = 4;

    while(start<end){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }

    for(int i=0; i<5; i++){
      cout<<arr[i];
    }
}