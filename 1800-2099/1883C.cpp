#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    ll a[n];
    int ev = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] % 2 == 0)
            ev++;
    }
    int ans = INT_MAX; int temp;
    for(int i = 0; i < n; ++i){
        temp = (a[i]/k+1) * k - a[i];
        ans = min(ans, temp);
    }
    if(k == 4){
        if(ev >= 2) ans = 0;
        else if(ev == 1) ans = min(ans, 1);
        else ans = min(ans, 2);
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