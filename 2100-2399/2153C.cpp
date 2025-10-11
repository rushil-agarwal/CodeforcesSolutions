#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<ll, int> hash;

    for (int i = 0; i < n; ++i) {
        ll temp;
        cin >> temp;
        hash[temp]++;
    }

    vector<ll> vec;
    for (auto &it : hash)
        vec.push_back(it.first);

    ll res = 0;
    ll sum = 0;
    ll odd1 = 0;
    ll odd2 = 0;

    for (ll x : vec) {
        int freq = hash[x];

        if (freq >= 2) {
            ll p = freq / 2;
            ll tempSum = sum + p * 2 * x;

            ll t1 = odd1;
            ll t2 = odd2;

            if (freq % 2 == 1)
                if (x > t1) {
                    t2 = t1;
                    t1 = x;
                } else if (x > t2) t2 = x;

            if (2 * x < tempSum) 
                res = max(res, tempSum);

            if (t1 > 0) {
                ll z = tempSum + t1;
                if (2 * x < z) res = max(res, z);
            }

            if (t2 > 0) {
                ll z = tempSum + t1 + t2;
                if (2 * x < z) res = max(res, z);
            }
        }

        if (freq >= 1) {
            ll tempSum = sum;

            if (tempSum > 0) {
                ll z = tempSum + x;
                if (2 * x < z) 
                    res = max(res, z);
            }

            if (odd1 > 0) {
                ll z = tempSum + x + odd1;
                if (2 * x < z) 
                    res = max(res, z);
            }
        }

        sum += 1LL*(freq/2) * 2 * x;


        if (freq % 2 == 1)
            if (x > odd1) {
                odd2 = odd1;
                odd1 = x;
            } else if (x > odd2) 
                odd2 = x;


    }

    cout << res << endl;


}



int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}