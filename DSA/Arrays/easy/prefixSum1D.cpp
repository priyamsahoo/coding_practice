// https://leetcode.com/problems/running-sum-of-1d-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        // Notes:
        // This is called prefix-sum
        
        vector<int> prSum = {nums[0]};
        
        for (int i = 1; i < nums.size(); i++) {
            prSum.push_back(nums[i] + prSum[i - 1]);
        }
        
        return prSum;
    }
};