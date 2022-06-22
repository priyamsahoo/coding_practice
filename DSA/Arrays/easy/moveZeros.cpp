// https://leetcode.com/problems/move-zeroes/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // Notes:
        // Approach 1: Move all the non-zeros elements to the beginning and then fill the remaining spaces with zeros.
        // Approach 2: (Two pointers) begin l, r pointers from 0. Increment r always. Swap nums[l], nums[r] and 
        // increment l pointer as well when encountered non-zero element. 
        
        // 1st approach
        // move all the non-zero elements to the beginning
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        
        // fill the remaining spaces with zeros
        while (j < nums.size()) {
            nums[j] = 0;
            j++;
        }
        
        // **********************************************************************************
        // ********************************************************************************** 

        // 2nd approach
        // Two pointer approach
        int left = 0;
        int right = 0;
        
        while (right < nums.size()) {
            if (nums[right] == 0) {
                right++;
            } else {
                swap(nums[right], nums[left]);
                right++;
                left++;
            }
        }
    }
};