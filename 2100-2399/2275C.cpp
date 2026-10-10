#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n), value(n-4);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    for (int i = 0; i < n-4; i++) {
        value[i] = a[i] + a[i + 2] - a[i + 4];
    }

    unordered_map<ll, ll> freq;
    ll ans = 0;

    for (int i = 0; i < n-4; i++) {
        ans += freq[value[i]];
        freq[value[i]]++;
    }
    for (int i = 0; i < n-4; i++) {
        if (i + 2 < n-4 && value[i] == value[i + 2])
            ans--;

        if (i + 4 < n-4 && value[i] == value[i + 4])
            ans--;

    }

    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}