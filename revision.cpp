#include<bits/stdc++.h>
using namespace std;

//? Remove Duplicates from Sorted Array II

int Brute(vector<int>& nums) {
   map<int, int> countMap;                 // In the map, left will contain value and right will have count

      for (int num : nums) {
          countMap[num]++;            // Left side i'm storing value, if the same again repeats then it will increase the count by 1
      }

      int index = 0;
      for (auto& pair : countMap) {
          int num = pair.first;
          int count = pair.second;

          nums[index++] = num;            // First time i will store usually

          if (count >= 2) {
              nums[index++] = num;        // But second time i'll store if the count is greater than equal to 2!
          }
      }

      return index;
}

int Optimal(vector<int>& nums) {
    if(nums.size()<=2){                 // base
            return nums.size();
        }

        int i = 2;                    // Start from the third element
        for(int j = 2; j<nums.size(); j++){         // Book me Dry run kar samhjega!!
            if(nums[i-2] != nums[j]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
}

int main(){

  vector<int> nums = {1,1,1,2,2,3};

  //* Brute force approach

  int SizeOfArray = Brute(nums);
  cout<<SizeOfArray;


//* -------------------------------------------------------

  //* Optimal approach

  int SizeOfArray = Optimal(nums);
  cout<<SizeOfArray;

}