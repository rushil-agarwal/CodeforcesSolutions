#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll  n, p, k;
    cin >> n >> p >> k;
    vector<int> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    ll prefix=0, ans=0;

    sort(vec.begin(), vec.end());

    for (int i = 0; i <= k; i++) {
        ll sum = prefix;
        if (sum > p) break;
        ll cnt = i;
        for (int j = i + k - 1; j < n; j += k) {
            if (sum + vec[j] <= p) {
                cnt += k;
                sum += vec[j];
            } else {
                break;
            }
        }
        prefix += vec[i];
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}