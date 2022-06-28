// https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    // bool checkPalindrome(string ss, int l, int r) {
    //     if (l >= r) {
    //         return true;
    //     }
        
    //     if (ss[l] == ss[r]) {
    //         return checkPalindrome(ss, l + 1, r - 1);
    //     } else {
    //         return false;
    //     }
    // }
    
    bool isPalindrome(string s) {

        // Notes:
        // Mentioned above (commented one) is the recursive code.
        // Below is the iterative version. Two pointer approach.
        // First, format the string according to the need. Then check for palindrome.
       
        string ss = "";
        
        for (auto i : s) {
            if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9')) {
                ss += tolower(i);
            }
        }
        
        int l = 0;
        int r = ss.size() - 1;
        
        int flag = 0;
        while (l <= r) {
            if (ss[l] != ss[r]) {
                flag = 1;
                break;
            }
            
            l++;
            r--;
        }
        
        if (flag == 0) {
            return true;
        } else {
            return false;
        }
        
        // return checkPalindrome(ss, l, r);
        
    }
};