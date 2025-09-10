#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a, b; cin >> a >> b;

    ll ans = -1;

    if(b&1){
        if(a&1)
            cout << a*b+1 << endl;
        else
            cout << -1 << endl;
        return;
    }

    ll odd = b, maxPower = 0;
    while((odd&1) == 0){
        maxPower++;
        odd/=2;
    }

    if((a&1) && maxPower == 1){
        cout << -1 << endl;
        return;
    }

    ll temp1 = (a&1) ? 2 : 1;
    ll temp2 = 1LL*a*temp1 + 1LL*b/temp1;
    ll temp3 = 1LL*a*(b/2) + 2;

    cout << max(temp2, temp3) << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}