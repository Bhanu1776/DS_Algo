#include<bits/stdc++.h>
using namespace std;

//? Find the Duplicate Number   - Using Floyd's Cycle Detection algo
// In an array only one number will be duplicate number

int findDuplicate(vector<int>& nums) {

    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];                    // Initially slow pointer will move only one step ahead
        fast = nums[nums[fast]];              // Fast will move two steps
    }while(slow!=fast);

    slow = nums[0];                           //* Whenever slow and fast pointer meets, we will place slow to the very first position
    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];                    // And Both slow and fast pointer will only move one step
    }
    return slow;                              // Wherever both meets again, that number will be the duplicate one!
}

int main(){

  vector<int> nums = {3,1,3,4,2};


  //* Brute force approach
  // In the brute force approach, we will first sort the array
  // Then we will run the loop and check any same number placed twice, that will be the answer


//* -------------------------------------------------------

  //* Optimal approach 

  int output = findDuplicate(nums);
  cout<<output<<endl;

}