#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll funct(ll l, ll r){
    ll x = l;

    while (true) {
        bool flag = true;
        for (int i = 0; i < 64; i++) {
            ll bit = 1LL << i;
            if ((l & bit) && (x & bit)) {
                x = x +  bit;
                x =(x & (~(bit - 1)));
                flag = false;
                break;
            }
        }
        if (flag)
            break;
    }
        if(x<=r)
                return x;
    return -1;
}

void solve(){
    ll n, l, r, k;
    cin >> n >> l >> r >> k;

    if((n&1)){
        cout << l << endl;
        return;
    }

    if(n == 2){
        cout << -1 << endl;
        return;
    }

    ll num = funct(l, r);

    if(num == -1 || num > r){
        cout << -1 << endl;
        return;
    }

    if(k == n || k == n-1)
        cout << num << endl;
    else
        cout << l << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
