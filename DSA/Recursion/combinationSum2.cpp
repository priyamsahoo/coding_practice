// https://leetcode.com/problems/combination-sum-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void findCombinations(int idx, int target, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& ans) {
        
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        
        for (int i = idx; i < candidates.size(); i++) {
            
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }
            
            if (candidates[i] > target) {
                break;
            }
            
            // pick element
            ds.push_back(candidates[i]);
            findCombinations(i + 1, target - candidates[i], candidates, ds, ans);
            ds.pop_back();
        }
        return;
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        // Notes:
        // This can be done using same approach as of combination sum.
        // But when duplicates are supposed to not be taken, a little modification is to done.
        // 1. Sort array before sending it to the recursive function.
        // 2. Use set to remove the dups.

        // This method is not very efficient method.
        // Code written is of a an efficient method. TC -> (2^n * n)
        
        vector<int> ds;
        vector<vector<int>> ans;
        
        sort(candidates.begin(), candidates.end());
        findCombinations(0, target, candidates, ds, ans);
        
        return ans;
    }
};