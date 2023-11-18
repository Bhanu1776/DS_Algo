#include<bits/stdc++.h>
using namespace std;

//? Container With Most Water

int maxArea(vector<int>& height) {
    int n = height.size();
    int left = 0;         // At start
    int right = n-1;      // At end
    int ans = 0;          // Storing the max area

    while(left<right){
        ans = max(ans, (right-left)*min(height[left], height[right]));        // Dry run this based on given histograms
                                          // We want max area so that we can understand between which histograms max water we are able to store
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return ans;
}

int main(){

  vector<int> height = {1,8,6,2,5,4,8,3,7};

  //* Brute force approach

  // No brute force soln

//* -------------------------------------------------------

  //* Optimal approach

  int output = maxArea(height);
  cout<<output;

}

//* Leetcode problem link: https://leetcode.com/problems/container-with-most-water/