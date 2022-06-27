// https://leetcode.com/problems/combination-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void findCombinations(int i, int n, int target, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& ans) {
        if (i == n) {
            if (target == 0) {
                ans.push_back(ds);
            }
            
            return;
        }
        
        // pick element
        if (candidates[i] <= target) {
            ds.push_back(candidates[i]);
            findCombinations(i, n, target - candidates[i], candidates, ds, ans);
            ds.pop_back();
        }
        
        // not pick element
        findCombinations(i + 1, n, target, candidates, ds, ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        // Notes:
        // Whenever combinations or sub-sequences -> think of recursion.
        // Problem related to picking up elements from an array to form combination -> two options: pick/ not pick.
        
        // If more than one time allowed -> after picking the element, make a recursive call with the same element (i.e., same idx).
        
        int n = candidates.size();
        vector<int> ds;
        vector<vector<int>> ans;
        
        findCombinations(0, n, target, candidates, ds, ans);
        
        return ans;
    }
};