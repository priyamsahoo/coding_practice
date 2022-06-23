// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Notes:
        // Naive approach with 2 loops gives O(n^2) complexity
        // Better way: assume on ith day stock is sold, so keep a track of min value in the left side (stock is bought that day)
        // and calculate the profit. Update profit and min_element in every iteration.

        // Stock bought on global minima
        // Stock sold on global (maxima after the minima)
        
        int profit = 0;
        int x = INT_MAX;
        
        for (int i = 0; i < prices.size(); i++) {
            x = min(x, prices[i]);
            // if(prices[i] < x) {
            //     x = prices[i];
            // }
            
            profit = max(profit, prices[i] - x);
            // if((prices[i] - x) > profit) {
            //     profit = prices[i] - x;
            // }
            
        }
        
        return profit;
    }
};