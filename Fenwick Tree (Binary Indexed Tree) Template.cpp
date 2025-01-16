#include <bits/stdc++.h>
using namespace std;

vector<int> BIT;

void update(int idx, int val, int n) {
    for (++idx; idx <= n; idx += idx & -idx) BIT[idx] += val;
}

int query(int idx) {
    int sum = 0;
    for (++idx; idx > 0; idx -= idx & -idx) sum += BIT[idx];
    return sum;
}
