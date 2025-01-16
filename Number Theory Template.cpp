#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll modExp(ll x, ll n, ll m) { // Modular exponentiation
    ll result = 1;
    while (n > 0) {
        if (n % 2 == 1) result = (result * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return result;
}

vector<bool> sieve(int n) { // Sieve of Eratosthenes
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}

int gcd(int a, int b) { // Euclid's algorithm for GCD
    return b == 0 ? a : gcd(b, a % b);
}
