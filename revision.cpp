#include<bits/stdc++.h>
using namespace std;

//? Rotate Image by 90deg

// The first row will be the last col
// The second row will be the second last col
// The third row will be the third last col

//*  1 2 3         7 4 1
//*  4 5 6   ==>   8 5 2
//*  7 8 9         9 6 3


void rotate(vector<vector<int>>& matrix) {      
    int n = matrix.size();

    for(int i = 0; i<n; i++){                  //* Step 1) Finding out the transpose
        for(int j=0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);   // Remember this way!
        }
    }

    for(int i = 0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());    //* Step 2) Reversing the transposed matrix
    }
}


int main(){

  vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

  //* Brute force approach

  // We will be placing the first row into new matrix as last col, second row as last second col, likewise...
  

//* -------------------------------------------------------

  //* Optimal approach 

//? Observation from the above matrix:
// Diagonal elements will always be same when rotated
// When we transpose the og matrix and later reverse the whole matrix will give the resultant output

  rotate(matrix);

  for(int i = 0; i<matrix.size(); i++){                  
    for(int j=0; j<matrix[0].size(); j++){
        cout<<matrix[i][j]<<' ';
    }
    cout<<endl;
  }
}
