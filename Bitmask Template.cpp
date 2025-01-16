#include <bits/stdc++.h>
using namespace std;

void printSubsets(int n) {
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) cout << i << " ";
        }
        cout << endl;
    }
}
