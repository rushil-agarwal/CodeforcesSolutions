#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll powerMod(ll base, ll exponent, ll mod) {
    ll result = 1;
    base %= mod;
    while (exponent > 0) {
        if (exponent % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}
ll modInv(ll number, ll mod) {
    return powerMod(number, mod - 2, mod);
}

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<long long> vec(n);
    bool allEven = true;

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        if (vec[i] % 2 != 0) allEven = false;
    }

    if (k % 2 != 0) {
        for (int i = 0; i < n; ++i) {
            if (vec[i] % 2 != 0) vec[i] += k;
        }
    } else if (!allEven) {
        vector<int> smallPrimes = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        ll mod = 0;
        for (int prime : smallPrimes) {
            if (k % prime != 0) {
                mod = prime;
                break;
            }
        }
        
        ll stepInverse = modInv(k, mod);
        for (int i = 0; i < n; i++) {
            ll remainder = vec[i] % mod;
            if (remainder != 0) {
                ll need = (mod - remainder) % mod;
                ll mult = (need * stepInverse) % mod;
                vec[i] += mult * k;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    
    cout << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) solve();
    return 0;
}
