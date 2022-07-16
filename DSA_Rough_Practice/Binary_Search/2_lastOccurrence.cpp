// Given a sorted array of duplicates, find the last occurrence of target

#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int> v, int target) {
    int l = 0, r = v.size() - 1;
    int ans = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;
        
        if(v[m] == target) {
            ans = m;
            l = m + 1;
        }

        else if(v[m] < target) {
            l = m + 1;
        }

        else {
            r = m - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> v = {1, 2, 2, 2, 3, 4, 4, 4, 5};
    int target = 4;

    cout << lastOccurrence(v, target);

    return 0;
}