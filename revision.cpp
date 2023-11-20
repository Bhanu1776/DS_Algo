#include<bits/stdc++.h>
using namespace std;

//? Merge Intervals (Merge all overlapping intervals)     -- Watch video 

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    int n = intervals.size();

    if(n==0)    return ans;

    sort(intervals.begin(), intervals.end());
    vector<int> prev = intervals[0];

    for(int i = 1; i<n; i++){
        int curr_start = intervals[i][0];
        int prev_end = prev[1];

        if(curr_start<=prev_end){
            prev[1] = max(prev[1], intervals[i][1]);
        }
        else{
            ans.push_back(prev);
            prev = intervals[i];
        }
    }
    ans.push_back(prev);

    return ans;
}

int main(){

  vector<vector<int>> matrix = {{1,3}, {2,6}, {8,10}, {15,18}};

  //* Brute force approach

  // No brute force soln
  

//* -------------------------------------------------------

  //* Optimal approach 

  vector<vector<int>> output = merge(matrix);

  for(int i = 0; i<matrix.size(); i++){
    for(int j = 0; j<matrix[0].size(); j++){
      cout<<output[i][j];
    }
  }
}

//* Video Link: https://youtu.be/ot1EnxRl5DM?si=G9AAgFPCI5Q8YFQS