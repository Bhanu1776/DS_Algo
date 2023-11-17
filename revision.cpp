#include<bits/stdc++.h>
using namespace std;

//? Maximum consecutive ones

int main(){

  int arr[9] = {1,1,0,1,1,1,0,1,1};

  //* Brute force approach

  // No brute force solution 

//* -------------------------------------------------------

  //* Optimal approach

  int maxi = 0;
  int count = 0;

  for(int i = 0; i<9; i++){
    if(arr[i]==1){
      count++;
      maxi = max(maxi, count);
    }
    else{
      count = 0;
    }
  }

  cout<<maxi<<endl;
}