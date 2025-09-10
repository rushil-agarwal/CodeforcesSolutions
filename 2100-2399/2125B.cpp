#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b){
    return (b==0) ? a : gcd(b, a%b);
}

bool check(ll a, ll b, ll k){
    ll factor = gcd(a, b);

    for(ll i=1; i*i<=factor; i++){
        if(factor%i != 0)
            continue;

        if(a/i <= k && b/i <= k)
            return true;

        ll temp = factor/i;

        if(a/temp <= k && b/temp <= k)
            return true;
    }

    return false;
}

void solve(){
    ll a, b, k;
    cin >> a >> b >> k;

    if(check(a, b, k))
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}