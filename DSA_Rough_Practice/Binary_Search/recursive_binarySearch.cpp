#include<bits/stdc++.h>
using namespace std;

// recursive binary search
int findTarget(int low, int high, vector<int> v, int target) {
    if(high < low) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if(v[mid] == target) {
        return mid;
    }

    else if(v[mid] < target) {
        return findTarget(mid + 1, high, v, target);
    }

    else {
        return findTarget(low, mid - 1, v, target);
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 5;

    cout << findTarget(0, v.size() - 1, v, target);

    return 0;
}