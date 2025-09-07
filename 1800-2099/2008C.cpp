#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll l,r; cin >> l >> r;
    ll val=l, inc=1, ans=0;
    while(val <= r){
        ans++;
        val+=inc;
        inc++;
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