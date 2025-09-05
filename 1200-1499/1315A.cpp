#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll x,y,a,b;
    cin >> a >> b >> x >> y;
    cout << max(max(x,a-x-1)*b,max(b-y-1,y)*a) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}