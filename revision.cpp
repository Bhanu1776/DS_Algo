#include<bits/stdc++.h>
using namespace std;

//? Pascal's Triangle

//* Approach One

// This function will take row number as input and returns the entire row values on that row index
vector<int> generateRow(int row){
    long long ans = 1;                      // The row will generally starts wtih 1 (for every pascals row )
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int col = 1; col<row; col++){
        ans = ans * (row - col);
        ans = ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> Hard(int N) {
    
    vector<vector<int>> ans;
    for(int i = 1; i<=N; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}

//* -------------------------------------------------------


//* Approach Two  -- Refer this!!
vector<vector<int>> Easy(int numRows) {
        
    vector<vector<int>> ans(numRows);           // This to return final ans

    for(int i = 0; i<numRows; i++){
        vector<int> temp(i+1, 1);               // Creating new 1d vector so that we can store the calculated values
                                                // Initially this vector is going to be filled with all ones

        for(int j = 1; j<i; j++){               // Traverse the elements from the second to second-last position of the current row
            temp[j] = ans[i-1][j] + ans[i-1][j-1];      // Val ke uppar wale row ka value and uske baju wale value ka addition
        }
        ans[i] = temp;                          // Store the current row in the Pascal's Triangle
    }
    return ans;
}

int main(){

  int numRows = 5;


  //* Better approach (Best)

  // vector<vector<int>> output = Hard(numRows);
  

//* -------------------------------------------------------

  //* Optimal approach (Hard)

  vector<vector<int>> output = Easy(numRows);
  
  for(int i = 0; i<output.size(); i++){
		for(int j= 0; j<i+1; j++){
			cout<<output[i][j]<<' ';
		}
    cout<<endl;
	}

}
