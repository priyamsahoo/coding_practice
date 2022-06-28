// https://leetcode.com/problems/subsets/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void getSubsets(int i, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(ds);
            return;
        }
        
        // pick element
        ds.push_back(nums[i]);
        getSubsets(i + 1, nums, ds, ans);
        ds.pop_back();
        
        // not pick element'
        getSubsets(i + 1, nums, ds, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {

        // Notes:
        // Backtracking is used.
        // For every element, we have two options, either to pick or not to pick.
        // Accordingly recursion is written.
        // Start from 0th idx. Base case -> when idx == nums.size(), you get one subset. Push it to the ans container.

        vector<int> ds;
        vector<vector<int>> ans;
        
        getSubsets(0, nums, ds, ans);
        
        return ans;
    }
};