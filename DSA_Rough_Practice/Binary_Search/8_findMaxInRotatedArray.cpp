// Given a sorted but rotated array, find the maximum element in it

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> v) {
    int l = 0, r = v.size() - 1;

    while(l < r) {
        int m = l + (r - l) / 2;
        if(v[m] > v[l]) {
            l = m;
        } else {
            r = m - 1;
        }
    }

    return v[l];
}

int main()
{
    vector<int> v = {4, 5, 6, 7, 8, 10, 2, 3};
    cout << findMin(v);

    return 0;
}