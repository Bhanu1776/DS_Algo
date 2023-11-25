#include<bits/stdc++.h>
using namespace std;

//? Four Sum
// Sum of 4 elements should be equivalent to the given target
//! before going through 4 sum problem, please revise 3 sum problem

vector<vector<int>> Optimal(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;


    sort(nums.begin(), nums.end());             // 1) sort the given array

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;    // avoid the duplicates while moving i

        for (int j = i + 1; j < n; j++) {
            
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;    // avoid the duplicates while moving j

            int k = j + 1;                      
            int l = n - 1;
            while (k < l) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];

                if (sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++; l--;

                    //skip the duplicates:
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }
    return ans;
}

int main(){

  vector<int> nums = {1,0,-1,0,-2,2};
  int target = 0;

  //* Brute force approach
  // Steps:-
    // 1) Iterate through array using four loops because we need four values right.
    // 2) Now store all the four elements in long long sum variable
    // 2) check if the sum is equivalent to the target, if yes store in temporary array;
    // 3) Now we need to sort the array (to handle duplicates);
    // 4) To deal with duplicates, we will send all values to "set" data structure
    // 5) At the end we will create a vector which we want to return and transfer all the set values into ans vector.
    //* T.C ==> O(n^4), S.C ==> O(2N)


//* -------------------------------------------------------

  //* Better approach 

  // Better approach would be as same as 3sum problem - using hashSet

  //* T.C ==> O(n^3 * logM), S.C ==> O(2N)


//* -------------------------------------------------------

  //* Optimal approach 

  vector<vector<int>> output = Optimal(nums, target);

  for(auto row: output){
    for(auto col: row){
      cout<<col<<", ";
    }
    cout<<endl;
  }

  //* T.C ==> O(n^3) + O(MxN),   -- MxN bcoz we running 2 while loops
  //* S.C ==> O(1)

}