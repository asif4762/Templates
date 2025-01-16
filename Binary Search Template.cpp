#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        else if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
