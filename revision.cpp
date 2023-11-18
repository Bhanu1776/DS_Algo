#include<bits/stdc++.h>
using namespace std;

//? Median of Two Sorted Arrays

//* Steps:-
//  1) First create a new vector considering two given array sizes
//  1) Merge both give arrays into a newly created one
//  1) Sort the merged array
//  1) Find the median
//      a) Where size of the merged array is (even)
//          - Find out using given formula (Hard formula bc!!)    //* Imp to remember
//      b) Where (odd)
//          - dived the size of merged array (simple formula)

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged;
    merged.reserve(nums1.size() + nums2.size());
    
    merged.insert(merged.end(), nums1.begin(), nums1.end());
    merged.insert(merged.end(), nums2.begin(), nums2.end());
    
    sort(merged.begin(), merged.end());

    int combinedLength = merged.size();
    if (combinedLength % 2 == 0) {            // If the total number of elements in the merged array is even
                                              // Calculate the median for an even number of elements
        return (merged[combinedLength / 2 - 1] + merged[combinedLength / 2]) / 2.0;         //* Imp to remember
    } else {                                  // If the total number of elements in the merged array is odd
                                              // Calculate the median for an odd number of elements
        return merged[combinedLength / 2];
    }
}

int main(){

  vector<int> nums1 = {1,2};
  vector<int> nums2 = {3,4};

  //* Brute force approach

  // No brute force soln

//* -------------------------------------------------------

  //* Optimal approach

  double output = findMedianSortedArrays(nums1, nums2);
  cout<<output;

}