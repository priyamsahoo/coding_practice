// Given a sorted but rotated array, find the minimum element in it (array may contain DUPLICATES)

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> v) {
    int l = 0, r = v.size() - 1;
    while(l < r) {
        int m = l + (r - l) / 2;
        if(v[m] < v[r]) {
            r = m;
        }
        else if(v[m] > v[r]) {
            l = m + 1;
        }
        else {
            // if equal
            r--;
        }
    }

    return v[l];
}

int main()
{
    vector<int> v = {1, 1, 1, 1, 0, 0, 1, 1};
    cout<< findMin(v);

    return 0;
}