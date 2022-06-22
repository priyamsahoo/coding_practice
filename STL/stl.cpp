// All the STL required for getting started with DSA

#include<bits/stdc++.h>
using namespace std;

// Pairs
// It is a data type present in the utility library
void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.second << " " << q.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;;
}

// Vectors
// It is a container. All the functions in other containers like queue, map, etc. are going to be same

int main() {
    explainPair();

    return 0;
}

