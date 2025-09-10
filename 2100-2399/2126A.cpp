#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int x; cin >> x;
    int ans = INT_MAX;
    while(x>0){
        ans = min(ans, x%10);
        x/=10;
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