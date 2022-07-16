#include<bits/stdc++.h>
using namespace std;

// basic binary search
int binarySearch(vector<int> v, int target) {
    int left = 0;
    int right = v.size() - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(v[mid] == target) {
            return mid;
        }

        else if (v[mid] < target) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {1, 3, 5, 6, 7, 9, 11};
    int target = 10;

    cout << binarySearch(v, target);

    return 0;
}