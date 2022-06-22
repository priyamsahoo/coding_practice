// https://leetcode.com/problems/merge-sorted-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // Notes:
        // Naive approach is to insert the elements and sort
        // Two pointer approach: start from the last of each array. Insert the largest, and then decrement the pointer.
        // Can be done from the beginning end as well. But requires extra space. Since, in the question, array 1 already has extra
        // space, we started from last.

        int i = m - 1;
        int j = n - 1;
        int k = nums1.size() - 1;
        
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
            } else {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        
        // insert the remaining elements
        while(i >= 0) {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        
        while(j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};