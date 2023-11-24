#include<bits/stdc++.h>
using namespace std;

//? Reverse Pairs
// a[i] > 2 * a[j]
// [4, 6, 2] ==> In this given array 6 is greater than 2*2=4, so this pair will be count as 1, likewise we need to find all the pairs


//* Typical merge sort code and adding our logic in between
void merge(vector<int> &nums, int l, int m, int r){
      int count = 0;

      //copy into right & left array
      vector<int>left(nums.begin()+l,nums.begin()+m+1);
      vector<int>right(nums.begin()+m+1,nums.begin()+r+1);

      int i = 0, j = 0, n1 = left.size(),n2 = right.size();
      
      while(i < n1 && j < n2){
          if (left[i] <= right[j])
              nums[l++] = left[i++];
          else{
            nums[l++] = right[j++];
          }     
      }
      while (i < n1)
          nums[l++] = left[i++];
      while (j < n2)
          nums[l++] = right[j++];
  }


  //* This is the logic
  int countPairs(vector<int>&nums,int l, int m, int r){
      int count = 0;
      for(int i = l, j = m+1; i <= m; i++){
          while(j <= r && nums[i] > 2LL*nums[j]) j++;
          count += j-(m+1);
      }
      return count;
  }


  int mergeSort(vector<int> &nums, int l, int r){
      int count = 0;
      if (l == r) return count;
      
      int m = l + (r-l)/2;
      
      count += mergeSort(nums,l,m);             //left part sort
      count += mergeSort(nums,m+1,r);           //right part sort
      count += countPairs(nums,l,m,r);          //count pairs
      merge(nums,l,m,r);                        //merge these sorted array

      return count;
  }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }

int main(){

  vector<int> nums = {1,3,2,3,1};

  //* Brute force approach

  // In the brute force approach, we will go from i=0 to n-1 and then another loop that will start from j=i+1 to n-1
  // wherever we find a[i] > 2 * a[j] we will increase the count;
  // Time complexity will be O(n^2) and S.C will be O(1)

 
//* -------------------------------------------------------

  //* Optimal approach -- Its pretty difficult

  int output = reversePairs(nums);
  cout<<output;

}