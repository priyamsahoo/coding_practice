// https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Notes:
        // The solution is using two pointer approach
        // Can be done using Map approach and naive approach (2 loops)

        vector<pair<int, int>> v;
        
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        
        sort(v.begin(), v.end());
        
        int left = 0, right = v.size() - 1;
        vector<int> ans;
        
        while (left <= right) {
            int check = v[left].first + v[right].first;
            
            if (check == target) {
                ans = {v[left].second, v[right].second};
                break;
            } else if (check < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return ans;
    }
};