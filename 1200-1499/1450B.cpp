#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a;
        for (int i=0;i<n;i++){
            int c,b;
            cin >> c >> b;
            a.push_back(make_pair(c,b));
        }
        int ans = -1;
        for (int i = 0; i < n; ++i) {
            int temp = 0;
            for (int j = 0; j < n; ++j) {
                temp = max(temp, abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second));
            }
            if (temp <= k) ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}