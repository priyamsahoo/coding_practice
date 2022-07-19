// Given a sorted rotated array and a target, find the index of the target element

#include<bits/stdc++.h>
using namespace std;

int findElement(vector<int> v, int target) {
    int l = 0, r = v.size() - 1;
    while(l <= r) {
        int m = l + (r - l) / 2;

        if(v[m] == target) {
            return m;
        }

        // left part is sorted
        else if(v[m] > v[l]) {
            // if target is present in the sorted part or not
            if(target >= v[l] && target <= v[m]) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        // right part is sorted
        else {
            // if target is present in the sorted part or not
            if(target >= v[m] && target <= v[r]) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 2;
    cout << findElement(v, target);

    return 0;
}