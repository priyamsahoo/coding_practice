// https://leetcode.com/problems/subsets-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void findSubsets(int i, vector<int>& nums, vector<int>& ds, set<vector<int>>& setAns) {
        if (i == nums.size()) {
            setAns.insert(ds);
            return;
        }
        
        // pick element
        ds.push_back(nums[i]);
        findSubsets(i + 1, nums, ds, setAns);
        ds.pop_back();
        
        // not pick element
        findSubsets(i + 1, nums, ds, setAns);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        // Note:
        // Same as subset problem, but when duplicates are allowed
        // sort it first and then put the answers in a set
        
        vector<int> ds;
        set<vector<int>> setAns;
        
        // sort first
        sort(nums.begin(), nums.end());
        findSubsets(0, nums, ds, setAns);
        
        vector<vector<int>> ans;
        for (vector<int> v : setAns) {
            ans.push_back(v);
        }
        
        return ans;
    }
};