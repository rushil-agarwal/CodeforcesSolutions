#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<ll> posts(m), prod(n);

    for(int i=0; i<n; i++)
        cin >> prod[i];

    for(int i=0; i<m; i++)
        cin >> posts[i];

    vector<ll> pref(n+1, 0);

    for(int i=0; i<n; i++)
        pref[i+1] = pref[i] + prod[i];

    int prev = 0;
    sort(posts.begin(), posts.end());
    ll ans = 0, sum = 0;

    for(int i=0; i<m; i++){
        sum = pref[posts[i]] - pref[prev];
        ans += abs(sum);
        prev = posts[i];
    }

    ans += pref[n] - pref[prev];

  //  cout << "ANs: " << ans << endl;

    cout << ans << endl;
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