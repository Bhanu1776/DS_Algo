#include<bits/stdc++.h>
using namespace std;

//? Maximum Subarray - Kadane's algorithm - Easy AF!

int maxSubArray(vector<int>& nums) {
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i<nums.size(); i++){         //* Dry run karle
        curr_sum = curr_sum + nums[i];
        max_sum = max(max_sum, curr_sum);

        if(curr_sum<0)  curr_sum = 0;
    }

    return max_sum;
}

int main(){

  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

  //* Brute force approach

  // In Brute force approach total 3 loops will run and will find the maximum
  

//* -------------------------------------------------------

  //* Optimal approach - Using Kadane's Algorithm

    int maxSum = maxSubArray(nums);
    cout<<maxSum<<endl;
}
