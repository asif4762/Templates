#include <bits/stdc++.h>
using namespace std;

vector<int> segTree;

void build(const vector<int>& arr, int node, int start, int end) {
    if (start == end) segTree[node] = arr[start];
    else {
        int mid = (start + end) / 2;
        build(arr, 2 * node + 1, start, mid);
        build(arr, 2 * node + 2, mid + 1, end);
        segTree[node] = segTree[2 * node + 1] + segTree[2 * node + 2];
    }
}
