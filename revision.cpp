#include<bits/stdc++.h>
using namespace std;

//? Majority Element - n/2
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

int Better(vector<int> v){                      //* Whenever we plays with count, Hashing comes into the picture
  map<int, int> myMap;                          // Using map, i will be storing the value in left and count on the right

  for(int i = 0; i<v.size(); i++){
    myMap[v[i]]++;                              // whenever element occurs again i'll increment the count
  }

  for(auto element: myMap){
    if(element.second > (v.size() / 2)){        // If my element count is greater than half of my overall size of an array then that would be my answer
      return element.first;
    }
  }
  return -1;                                    //* T.C ==> O(N logn) + N     // S.C ==> O(n) - If values in an array are unique
}



int Optimal(vector<int>& nums) {                //* Moore's Voting Algorithm  - Imp to understand the algorithm
  int count = 0;
  int candidate = 0;
  
  for (int num : nums) {
      if (count == 0) {
          candidate = num;
      }

      if (num == candidate) {                   // Whenever the first element occurs increase the count, apart from first element anything else occurs decrease the count
          count++;
      } else {
          count--;
      }
  }
  
  return candidate;                             //* T.C ==> O(N)      // S.C ==> O(1)
}


int main(){

  vector<int> nums = {3,2,3};
  

  //* Brute force approach

  // in the brute force solution, I will assume my first element to be the majority element for that i will run one more loop
  // The second loop will help me to keep a count while searching through entire array
  // Time complexity for this problem would be O(n^2)

//* -------------------------------------------------------

  //* Better approach 
  
  // int output1 = Better(nums);
  // cout<<output1<<endl;

//* -------------------------------------------------------

  //* Optimal approach 

  int output2 = Optimal(nums);
  cout<<output2<<endl;

}