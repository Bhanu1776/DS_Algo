#include<bits/stdc++.h>
using namespace std;

//? Grid Unique Paths
// In a grid, we can only move down and right side

//* Brute force soln        - Using recursion - T.c will be exponential ==> O(2^(n+m))
int countPaths(int i, int j, int n, int m){     //* For better understanding draw recursive tree
    if(i==(n-1) && j==(m-1))    return 1;       // Whenever we reach at the end of every branch node, that time return 1;
    if(i>=n || j>=m)    return 0;               // This is when we go out of boundary, return 0;
    else return countPaths(i+1, j, n, m) + countPaths(i, j+1, n, m);         // Traversing through the recursive tree
}


//* Optimal soln
int uniquePaths(int m, int n) {                 // Dry run the code to understand better!
	int N = n+m - 2;                            // This is to move from the top-left corner to the bottom-right corner in a grid.
	int r = m - 1;                              // In short we are finding NCr
	double result = 1;

	for(int i = 1; i<=r; i++){
		result = result * (N-r+i) / i;          // (N-r+i) is the numerator and /i is denominator
	}
	return (int)result;
}

int main(){

  int m = 2, n = 3;

  //* Brute force approach

  int output = countPaths(0, 0, 3, 7);
  cout<<output<<endl;
 
//* -------------------------------------------------------

  //* Optimal approach 

  int totalCount= uniquePaths(2,3);
    cout<<totalCount;

}