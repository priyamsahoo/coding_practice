// Find the upper bound of x
// Upper bound -> First element greater than (>) x
// Eg:
// arr = [1, 3, 4, 6, 6, 7, 9]
// x = 6, ub = 7
// x = 4, ub = 6
// x = 5, ub = 6
// x = 9, ub = -1
// x = 10, ub = -1

#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> v, int x) {
    int l = 0, r = v.size() - 1;
    int ans = v.size();

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(v[m] > x) {
            ans = m;
            r = m - 1;
        }

        else {
            l = m + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> v = {1, 3, 4, 6, 6, 7, 9};
    int x = 6;

    cout << upperBound(v, x);

    return 0;
}