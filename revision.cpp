#include<bits/stdc++.h>
using namespace std;

//? Merge two sorted arrays without extra space


//* Approach 1

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
}


//* Approach 2

void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        for(int i = 0; i < n; i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
    }


int main(){

  vector<int> nums1 = {1,2,3,0,0,0};
  vector<int> nums2 = {2,5,6};

  int m = 3;
  int n = 3;


  //* Brute force approach

  // First we will create new array with the size of both given arrays
  // Then, we can simply iterate through both arrays and transfer to a new array
  // at last we will transfer new array values to both arrays respective to their sizes
  

//* -------------------------------------------------------

  //* Optimal approach 

  merge(nums1, m, nums2, n);
  // merge2(nums1, m, nums2, n);

  for(auto& element: nums1){
    cout<<element;
  }

}