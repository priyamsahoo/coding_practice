// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Notes:
        // Keep adding the difference of prices[i] and prices[i - 1] if there is a profit.

        // Stocks bought if the price on next day is higher.
        // Basically, stocks bought in all local minima, and sold in all local maxima (after minima)
        
        if (prices.size() < 2) {
            return 0;
        }
        
        int netProfit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                netProfit += (prices[i] - prices[i - 1]);
            }
        }
        
        return netProfit;
    }
};