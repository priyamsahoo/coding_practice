// Given n, find the integer square root of that number
// Eg:
// n = 26, ans = 5

// Trick -> This boils down to "largest i between 1 to n where i*i is <= n"

#include<bits/stdc++.h>
using namespace std;

int integerSqRoot(int n) {
    int l = 1, r = n;
    int ans = 1;

    while(l <= r) {
        int m = l + (r - l) / 2;
        if(m * m <= n) {
            ans = m;
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
    int n = 26;
    cout << integerSqRoot(n);

    return 0;
}