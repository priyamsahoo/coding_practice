// https://leetcode.com/problems/find-pivot-index/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        // Notes:
        // We have two arrays. Left one we sum from left to right. Right one we sum from right to left.
        // The idea is if pivot exists, leftside + pivot = rightside + pivot.

        // For example, arr = [1, 3, 7, 6, 5, 6]
        // left = [1, 4, 11 ,17, 22, 28]
        // right = [28, 27, 24, 17, 11, 6]
        // The ans. is 3 since we have 17 common in 3rd index of both the arrays.
        
        // If there is a pivot, it should have the same index, then we return it, otherwise return -1;
        
        int n = nums.size();
        
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        
        leftSum[0] = nums[0];
        rightSum[n - 1] = nums[n - 1];
        
        for (int i = 1; i < nums.size(); i++) {
            leftSum[i] = nums[i] + leftSum[i - 1];
            rightSum[n - 1 - i] = nums[n - 1 - i] + rightSum[n - i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (leftSum[i] == rightSum[i]) {
                return i;
            }
        }
        
        return -1;
    }
};