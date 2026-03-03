#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    ll p, q; cin >> p >> q;

    if(p > q){
        cout << "Alice\n";
        return;
    }

    long double frac = 1.0*p/q;

    if(p < q && 3LL*p >= 2LL*q)
        cout << "Bob\n";
    else
        cout << "Alice\n";


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