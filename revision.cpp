#include<bits/stdc++.h>
using namespace std;

//? TwoSum problem

vector<int> Brute(vector<int>& nums, int target) {
  vector<int> outputArray;

  for(int i =0; i<nums.size(); i++){
      for(int j=i+1; j<nums.size(); j++){
          if(nums[i]+nums[j]==target){
              outputArray.push_back(i);
              outputArray.push_back(j);
              break;
          }
      }
  }
  return outputArray;
}

// Using Map
vector<int> Better(vector<int>& nums, int target) {
    map<int,int> output;
    int n = nums.size();

    for(int i = 0; i<n; i++){
        int num = nums[i];
        int val = target - nums[i];

        if(output.find(val) != output.end()){
            return {output[val], i};
        }
        output[num] = i;
    }
    return {-1, -1};
}

// Using two pointer approach - different variant
string Optimal(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0;
    int right = n-1;

    while(left<right){
      int sum = nums[left] + nums[right];

      if(sum == target){
        return "Yes";
      }
      else if(sum<target)   left++;
      else right--;
    }
    return "NO";
}

int main(){

  vector<int> nums = {2,7,11,15};
  int target = 9;

  //* Brute force approach

  // vector<int> output = Brute(nums, target);

  // for(auto& element:output ){
  //   cout<<element;
  // }
  

//* -------------------------------------------------------

  //* Better approach

  vector<int> output = Better(nums, target);

  for(auto& element:output ){
    cout<<element;
  }

//* -------------------------------------------------------

  //* Optimal approach

  // cout<<Optimal(nums, target);

}