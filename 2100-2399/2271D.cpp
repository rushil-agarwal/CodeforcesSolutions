#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;
class Fenwick {
    int n;
    vector<ll> tree;
public:
    Fenwick(int size) {
        n = size;
        tree.assign(n + 1, 0);
    }
    void update(int idx, ll val) {
        while (idx <= n) {
            tree[idx] += val;
            idx += idx & -idx;
        }
    }
    ll query(int idx) {
        ll sum = 0;
        while (idx > 0) {
            sum += tree[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
};

bool infected(ll x, vector<pair<ll, ll>> &intervals) {
    int low = 0, high = intervals.size();
    while (low < high) {
        int mid = (low + high) / 2;

        if (intervals[mid].first <= x)
            low = mid + 1;
        else
            high = mid;
    }
    return (low > 0) && (intervals[low - 1].second >= x);
}

void solve() {
    int n;
    ll m, k;
    cin >> n >> m >> k;

    vector<pair<ll, ll>> intervals(n);

    for (auto &p : intervals)
        cin >> p.first >> p.second;

    ll maxR = intervals.back().second;

    if (k == 0) {
        cout << (maxR+ 1)<< '\n';
        return;
    }

    ll currentF = 0;

    for (auto [l, r] : intervals) {
        if (l <= m)
            currentF += min(r, m) - l + 1;
    }

    ll initialDiff = infected(m + 1, intervals) - infected(1, intervals);

    vector<pair<ll, int>> events;
    vector<ll> coords = {1};

    for (auto &[l, r] : intervals) {
        events.push_back({l - m, 1});
        events.push_back({r + 1 - m, -1});
        events.push_back({l, -1});
        events.push_back({r + 1, 1});
    }

    for (auto &event : events) {
        if (event.first > 1)
            coords.push_back(event.first);
    }

    sort(coords.begin(), coords.end());
    coords.erase(unique(coords.begin(), coords.end()), coords.end());

    Fenwick fTree(coords.size());

    for (auto &event : events) {
        if (event.first <= 1)
            continue;

        int idx = lower_bound(coords.begin(), coords.end(), event.first)- coords.begin() + 1;

        fTree.update(idx, event.second);
    }
    for (int i = 0; i < coords.size()-1; i++) {
        ll currentS = coords[i];
        ll nextS = coords[i + 1], diff = initialDiff + fTree.query(i + 1);

        if (diff == 0) {
            if (currentF == k) {
                cout << currentS << '\n';
                return;
            }
        } else {
            ll needed = k - currentF;

            if (needed % diff == 0) {
                ll candidate = currentS + needed / diff;

                if (candidate >= currentS && candidate <= nextS) {
                    cout << candidate << '\n';
                    return;
                }
            }
        }

        currentF += diff * (nextS - currentS);
    }

    if (currentF == k)
        cout << coords.back() << '\n';
    else
        cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
