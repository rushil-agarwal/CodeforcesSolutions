#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    ll ans = 0;
    if(n == 2 || n ==3){
        cout << "1\n";
        return;
    }

    ans += k;

    ll dist = abs(x1-x2);;

    dist = min(dist, n-dist);

    ans += dist;

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