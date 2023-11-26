#include<bits/stdc++.h>
using namespace std;

//? Longest Subarray With K Sum - Hard bc!


// This is correct only if array contains positives and zeros 
int subarraySum(vector<int>& nums, int k) {
    int left = 0;
    int right = 0;
    long long sum = nums[0];
    int maxLen = 0;
    int n = nums.size();

    while(right<n){
        while(left <= right && sum > k){
            sum -= nums[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n)   sum += nums[right];
    }
    return maxLen;
}

int main(){

  vector<int> nums = {1,2,3};        
  int k = 3; 

  //* Brute force approach
  
  // In the brute force approach, we will be run 1 loop called i from 0 to n
  // Second loop j will be from i to n
  // Inside second loop we will initialize sum variable with 0
  // Now we will add arr[k] in the sum variable and we need to check if sum == k?
  // If we get any sum, compare it with previous length and get the maximum one
  //* T.C ==> O(n^2)      S.C ==> O(1)

//* -------------------------------------------------------

  //* Better approach 

  // Better approach taught by striver is capable for both positives and negatives, but its super hard

//* -------------------------------------------------------
 
  //* Optimal approach 

  int output = subarraySum(nums, k);
  cout<<output;

  //* T.C ==> O(2N)     S.C ==> O(1) 


}