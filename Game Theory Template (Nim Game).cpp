#include <bits/stdc++.h>
using namespace std;

bool nimGame(vector<int>& piles) {
    int xorSum = 0;
    for (int pile : piles) xorSum ^= pile;
    return xorSum != 0; // If xorSum is non-zero, the first player has a winning strategy
}
