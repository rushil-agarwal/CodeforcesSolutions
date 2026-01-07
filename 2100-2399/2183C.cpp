#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    ll n, m, k, ans = 1; cin >> n >> m >> k;
    ll left = k-1, right = n-k;

    ll maxi = max(left,right);

    for(ll i=0; i<=maxi; i++){
        if(i <= left){
            ll remaining = m+1 - 2*i;

            if(remaining >= 0){
                ll j = min(i, remaining);
                j = min(j, right);
                ans = max(ans, i+j+1);
            }
        }


        if( i <= right){
            ll remaining = m+1 - 2*i;

            if(remaining >= 0){
                ll j = min(i, remaining);
                j = min(j, left);
                ans = max(ans, i+j+1);
            }
        }
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}