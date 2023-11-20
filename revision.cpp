#include<bits/stdc++.h>
using namespace std;

//? Sort 0s,1s,2s - Dutch National Flag Algorithm
//? Leetcode problem name ==> sortColors (red, blue, white)    - Easy AF!

void sortColors(vector<int>& nums) {
    int n = nums.size();

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){                           //* Dry run to get a clear idea!
        if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
    }
}

int main(){

  vector<int> nums = {2,0,2,1,1,0};

  //* Brute force approach

  // No Brute force soln
  

//* -------------------------------------------------------

  //* Optimal approach 

    sortColors(nums);

    // Printing the output
    for(auto& element: nums){
      cout<<element<<' ';
    }
}


//? Why Dutch Flag algo is named as Dutch Flag Algo?
//* Bcoz whenever we sort the colors it represents dutch flag (red, white, blue) that is why it is named as dutch's national flag algorithm
