#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    ll max_h = INT_MIN;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> pq;
    // time, idx
    vector<bool> visited(n, false);
    set<pair<ll, ll>> unvisited;

    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        max_h = max(max_h, h[i]);
        unvisited.insert({h[i], i});
    }


    pq.push({0, k - 1});

    while (!pq.empty()) {
        auto [time, idx] = pq.top(); pq.pop();
        if (visited[idx]) continue;
        visited[idx] = true;

        if (h[idx] == max_h) {
            cout << "YES" << endl;
            return;
        }

        ll budget = h[idx] - time + 1;

        auto it_low = unvisited.lower_bound({h[idx] - budget, -1});
        auto it_high = unvisited.upper_bound({h[idx] + budget, LLONG_MAX});

        vector<pair<ll, ll>> to_erase;

        for (auto it = it_low; it != it_high; it++) {
            ll h_j = it->first;
            ll j = it->second;

            if (visited[j]) continue;

            ll arriveAt = time + abs(h[idx] - h_j);

            if (arriveAt <= h[idx]) {
                pq.push({arriveAt, j});
                to_erase.push_back(*it);
            }
        }
        for (auto& x : to_erase) {
            unvisited.erase(x);
        }
    }

    cout << "NO" << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
