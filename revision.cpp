#include<bits/stdc++.h>
using namespace std;

//? Majority Element - n/3
// The majority element is the element that appears more than ⌊n / 3⌋ times. You may assume that the majority element always exists in the array.


vector<int> majorityElement(vector<int>& nums) {                //* Moore's Voting Algorithm  - Imp to understand the algorithm
    int count1 = 0, count2 = 0;                     
    int candidate1 = 0, candidate2 = 0;         // Potential candidates

    // First loop to find potential majority elements.
    for (int i = 0; i < nums.size(); i++) {
        
        if (count1 == 0 && nums[i] != candidate2) {         // If count1 is 0 and the current number is not equal to candidate2, update candidate1.
            count1 = 1;
            candidate1 = nums[i];
        } 
        else if (count2 == 0 && nums[i] != candidate1) {    // If count2 is 0 and the current number is not equal to candidate1, update candidate2.
            count2 = 1;
            candidate2 = nums[i];
        } 
        else if (candidate1 == nums[i]) {
            count1++;
        }
        else if (candidate2 == nums[i]) {
            count2++;
        } 
        else {
            count1--;
            count2--;
        }
    }

    vector<int> result;
    int threshold = nums.size() / 3;            // Threshold for majority element

    // Second loop to count occurrences of the potential majority elements.
    count1 = 0, count2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (candidate1 == nums[i]) {
            count1++;
        } else if (candidate2 == nums[i]) {
            count2++;
        }
    }

    // Check if the counts of potential majority elements are greater than n/3 and add them to the result.
    if (count1 > threshold) {
        result.push_back(candidate1);
    }
    if (count2 > threshold) {
        result.push_back(candidate2);
    }

    return result;                              //* T.C ==> O(N)      // S.C ==> O(1)
}                     


int main(){

  vector<int> nums = {3,2,3};
  

  //* Brute force approach

  // in the brute force solution, I will assume my first element to be the majority element for that i will run one more loop
  // The second loop will help me to keep a count while searching through entire array
  // The soln will be returning atleast two majority elements - add condition if(returning_vector.size() == 2)  break;
  // The theory behind this is, if the size of an array is 8 therefore the maximum 2 elements can occur consisting of 3 - 3 frequencies
  // Time complexity for this problem would be O(n^2)

//* -------------------------------------------------------

  //* Better approach 

  // Just like previous sum we are going to use hashmaps - wherever we plays with counting we use hashing technique
  // We will iterate through an array and store the value as key and their count as value.
  // The moment any of the element answer goes to 3 - we will store into the ans
  // Bcoz n/3 means any majority element would consist of atleast 3 frequency
  // In the one iteration only we can get the soln, this will surely reduce time.
  // We don't have to iterate through hashmap and see whose count is greater! 
  //* Due to one iteration the T.C will be O(N logN) and S.C will be O(n)

//* -------------------------------------------------------

  //* Optimal approach 

  vector<int> output = majorityElement(nums);
  
  for(auto i:output){
    cout<<i;
  }

}