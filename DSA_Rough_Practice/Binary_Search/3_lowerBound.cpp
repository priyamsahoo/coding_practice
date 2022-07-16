// Find the lower bound of x
// Lower bound -> first element greater than or equal to (>=) x
// Eg:
// arr = [1, 3, 5, 7, 9, 10]
// x = 7, lb = 7
// x = 8, lb = 9
// x = 11, lb = -1

#include<bits/stdc++.h>
using namespace std;

// lower bound implementation
int lowerBound(vector<int> v, int x) {
    int l = 0, r = v.size() - 1;
    int ans = v.size();

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(v[m] >= x) {
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
    
    vector<int> v = {1, 3, 5, 7, 9, 10};
    int x = 4;

    cout << lowerBound(v, x);

    return 0;
}