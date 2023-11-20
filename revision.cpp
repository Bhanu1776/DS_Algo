#include<bits/stdc++.h>
using namespace std;

//? Best Time to Buy and Sell Stock

int maxProfit(vector<int>& prices) {

    int mini = INT_MAX;
    int profit = 0;

    for(int i = 0; i<prices.size(); i++){
        mini = min(mini, prices[i]);
        profit = max(profit, prices[i] - mini);
    }

    return profit;

}

int main(){

  vector<int> prices = {7,1,5,3,6,4};

  //* Brute force approach

  // Running two loops comparing with each and every number and getting the final output.
  

//* -------------------------------------------------------

  //* Optimal approach 

  int profit = maxProfit(prices);
  cout<<profit;
    
}
