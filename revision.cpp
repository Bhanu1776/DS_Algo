#include<bits/stdc++.h>
using namespace std;

//? Three sum 
// Return all the triplets whose sum is 0 and that should be unique

vector<vector<int>> Brute(vector<int>& nums) {

  set<vector<int>> mySet;                     
  
  for(int i=0; i<nums.size(); i++){
      for(int j=i+1; j<nums.size(); j++){
          for(int k=j+1; k<nums.size(); k++){
              if(nums[i] + nums[j] + nums[k] == 0){
                  vector<int> temp = {nums[i], nums[j], nums[k]};
                  sort(temp.begin(), temp.end());                 // Sorting so that it will be easy to neglect duplicates
                  mySet.insert(temp);                             // Storing in set bcoz we don't want duplicate values
              }
          }
      }
  }
  vector<vector<int>> ans(mySet.begin(), mySet.end());
  return ans;
}



vector<vector<int>> Better(vector<int>& nums) {   // Dry run to understand better

  set<vector<int>> mySet;
  
  for(int i=0; i<nums.size(); i++){
      set<int>  hashset;                        // Whenever i increases we need to empty hashtable

      for(int j=i+1; j<nums.size(); j++){
          int third = - (nums[i] + nums[j]);    //* This is how we finding third element, just like what we did in 2sum problem
          
          if(hashset.find(third) != hashset.end()){           // These steps to eliminate duplicate triplets
              vector<int> temp = {nums[i], nums[j], third};
              sort(temp.begin(), temp.end());
              mySet.insert(temp);
          }
          hashset.insert(nums[j]);              // In the hashmap we are storing the third element, which we need to find
      }
  }
  vector<vector<int>> ans(mySet.begin(), mySet.end());
  return ans;
}



vector<vector<int>> Optimal(vector<int>& nums) {

  int n = nums.size();
  vector<vector<int>> ans;

  sort(nums.begin(), nums.end());               //* IMP: In this approach, I am sorting the array at the very beginning

  for(int i = 0; i < n; i++) {
      if(i >0 && nums[i] == nums[i - 1]) continue;    // This is the case where my ith index is not at 0th position and it should not be as same as previous element
                                                      // continue means, my code will not go down it will increment i++
      int j = i + 1;                            // Starting of jth index will be one step ahead of i
      int k = n - 1;                            // k will start from last

      while(j < k) {
          int sum = nums[i] + nums[j] + nums[k];

          if(sum > 0) {
              k--;

          }
          else if(sum < 0) {
              j++;

          }
          else{                                 // The case where we found triplet
              vector<int> temp = {nums[i] , nums[j] , nums[k]};
              ans.push_back(temp);
              j++;
              k--;
              while(j < k && nums[j] == nums[j - 1]) j++;       // We doing this because we don't want our j and i index should move at same number
              while(j < k && nums[k] == nums[k + 1]) k--;
          }
      }
  }
  return ans;
}

int main(){

  vector<int> nums = {-1,0,1,2,-1,-4};

  //* Brute force approach
  // Steps:-
    // 1) Iterate through array using three loops because we need three values right.
    // 2) check if sum of three elements are giving 0, if yes store in temporary array;
    // 3) Now we need to sort the array (to handle duplicates);
    // 4) To deal with duplicates, we will send all values to "set" data structure
    // 5) At the end we will create a vector which we want to return and transfer all the set values into ans vector.
    //* T.C ==> O(n^3), S.C ==> O(2N)

  // vector<vector<int>> output1 = Brute(nums);

  // for(auto row: output1){
  //   for(auto col: row){
  //     cout<<col<<", ";
  //   }
  //   cout<<endl;
  // }



//* -------------------------------------------------------

  //* Better approach 

  vector<vector<int>> output2 = Better(nums);

  for(auto row: output2){
    for(auto col: row){
      cout<<col<<", ";
    }
    cout<<endl;
  }

  //* T.C ==> O(n^2 * logM), S.C ==> O(2N)


//* -------------------------------------------------------

  //* Optimal approach 

  vector<vector<int>> output3 = Optimal(nums);

  for(auto row: output3){
    for(auto col: row){
      cout<<col<<", ";
    }
    cout<<endl;
  }

  //* T.C ==> O(N logN) + O(MxN),   -- MxN bcoz we running 2 while loops
  //* S.C ==> O(1)

}