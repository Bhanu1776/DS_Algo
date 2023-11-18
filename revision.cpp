#include<bits/stdc++.h>
using namespace std;

//? Remove Element form an Array

int Optimal(vector<int>& nums, int val) {
    int i = 0;           // Pointer to track the position of non-val elements

      for (int j = 0; j < nums.size(); j++) {
          if (nums[j] != val) {
              nums[i] = nums[j];
              i++;
          }
      }

      return i;
}

int main(){

  vector<int> nums = {1,1,1,2,2,3};
  int valueToBeRemoved = 2;

  //* Brute force approach

  // No brute force soln

//* -------------------------------------------------------

  //* Optimal approach

  int output = Optimal(nums, valueToBeRemoved);
  cout<<output;

}