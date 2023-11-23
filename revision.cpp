#include<bits/stdc++.h>
using namespace std;

//? Search a 2D Matrix

//* Variant 1: Using binary search
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    int s = 0;
    int e = m*n - 1;
    int mid;

    while(s<=e){
        mid = e - (e-s)/2;

        int row_no = mid/m;                     
        int col_no = mid%m;

        int value = matrix[row_no][col_no];

        if(value == target) return true;
        else if(value<target) s = mid+1;
        else    e = mid-1;
    }
    return false;             //* Time complexity for this problem is O(log(n*m))
}


//* Variant 2: We cannot use binary search here..
bool search(vector<vector<int>> matrix, int n, int m, int x){
  int i = 0;
  int j = m-1;

  while(i<n and j>=0){
    if(matrix[i][j] == x) return true;
    else if(matrix[i][j] < x) i++;              // i++ matlab niche wale row me jaare
    else j--;                                   // j-- matlab piche se pichle ware row me jaare (<--)
  }
  return false;               //* Time complexity for this problem is O(n)
}


int main(){

  //? Variant 1: In this case we can observe that, 2nd row first col_no is > 1st row last col_no
  // 1  3  5  7
  // 10 11 16 20
  // 23 30 34 60
  vector<vector<int>> matrix1 = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target = 3;

  //? Variant 2: In this case we can observe that, numbers are sorted in a different way, where each and every column are sorted in ascending order
  // 3  30 38         // col 1: 3>36>40, but considering rows all rows connectively are not sorted.
  // 36 43 60
  // 40 51 69
  vector<vector<int>> matrix2 = {{3,30,38},{36,43,60},{40,51,69}};
  int x = 62;   // Target
  int n, m = 3;


  //* Brute force approach

  // In Brute force soln for both variants, we can iterate whole matrix and can find target value
  // But the time complexity will be O(n*m)


//* -------------------------------------------------------

  //* Optimal approach 

  // Variant 1:
  bool output1 = searchMatrix(matrix1, target);
  cout<<output1<<endl;

  // Variant 2:
  bool output2 = search(matrix2, n, m, x);
  cout<<output2;


}