#include<bits/stdc++.h>
using namespace std;

//? Missing and repeating numbers

pair<int, int> missingAndRepeating(vector<int> &A, int n) {

  int x = 0, y = 0;

  long long sum = (n * (n + 1)) / 2;            // Calculate the sum of the first n natural numbers
  long long sum2 = (n * (n + 1) * ((2 * n) + 1)) / 6;       // Calculate the sum of squares of the first n natural numbers

  for (auto i : A) {                            //* Dry run kar!
    sum -= 1ll * i;                             // Subtract each element from the total sum (sum will represent x - y)       
    sum2 -= (1ll * i * i);                      // Subtract the square of each element from the sum of squares (sum2 will represent x^2 - y^2)
  }                                             //* ll after one stands for long long

  x = (sum2 - (sum * sum)) / (2 * sum);         // Finding repeating Number
  y = (sum + x);                                // Finding Missing number

  return {y, x};
}


int main(){

  vector<int> nums = {3,3,2,1};
  int n = nums.size();


  //* Brute force approach

  // Creating 1 to n numbers array
  // Comparing it with given array, we will mark frequencies
  // If one element is present freq would be one! and if repeating numbers are found freq would be 2
  // In the same way if freq is 0 then it would be missing number


//* -------------------------------------------------------

  //* Optimal approach 

  pair<int, int> myPair = missingAndRepeating(nums, n);
 
    cout << myPair.first << " ";
    cout << myPair.second << endl;


}