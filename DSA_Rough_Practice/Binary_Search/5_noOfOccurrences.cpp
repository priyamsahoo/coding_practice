// Given an array, find the no. of occurrences of x

#include<bits/stdc++.h>
using namespace std;

int noOfOccurrences(vector<int> v, int x) {

    // find first occurrence
    int l = 0, r = v.size() - 1;
    int fOccur = -1;
    while(l <= r) {
        int m = l + (r - l) / 2;
        if(v[m] == x) {
            fOccur = m;
            r = m - 1;
        }
        else if (v[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    // find last occurrence
    int ll = 0, rr = v.size() - 1;
    int lOccur = -1;
    while(ll <= rr) {
        int mm = ll + (rr - ll) / 2;
        if(v[mm] == x) {
            lOccur = mm;
            ll = mm + 1;
        }
        else if (v[mm] < x) {
            ll = mm + 1;
        }
        else {
            rr = mm - 1;
        }
    }

    // no of occurrence
    int ans = 0;
    if(lOccur != -1 && fOccur != -1) {
        ans = lOccur - fOccur + 1;
    }
    
    return ans;
}

int main()
{
    vector<int> v = {1, 3, 5, 5, 7, 7, 7, 10};
    int x = 5;

    cout << noOfOccurrences(v, x);

    return 0;
}