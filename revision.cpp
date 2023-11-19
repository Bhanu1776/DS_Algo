#include<bits/stdc++.h>
using namespace std;

//? Set Matrix Zeros

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

	int baharKaRow[n] = {0};
	int baharKaCol[m] = {0};

	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(matrix[i][j]==0){
				baharKaRow[i] = 1;
				baharKaCol[j] = 1;
			}
		}
	}

	for(int i = 0; i<n; i++){
		for(int j= 0; j<m; j++){
			if(baharKaRow[i] ==1 || baharKaCol[j] == 1){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}

int main(){

  vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
  int n = matrix.size();
  int m = matrix[0].size();

  vector<vector<int>> output = zeroMatrix(matrix, n, m);
  
  for(int i = 0; i<n; i++){
		for(int j= 0; j<m; j++){
			cout<<matrix[i][j]<<' ';
		}
    cout<<endl;
	}
  //* Brute force approach

  // We will create exact same array with all the set zeros
  // This will take extra space and time.

//* -------------------------------------------------------

  //* Better approach (Best)

  


//* -------------------------------------------------------

  //* Optimal approach (Hard)

  // In optimal approach we are not going to use any dummy array this will reduce space
  // Instead of we will consider matrix's first row and col as a dummy array
  // But there's a catch the very first element of matrix is going to present for both col and row
  // So for that first element we will store the value in another variable in the form of boolean 

}
