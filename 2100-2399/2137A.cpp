#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int k, x;
    cin >> k >> x;
    long ans = 1LL * x * pow(2, k);
    cout << ans << endl;;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}