#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> primes = {2, 3, 5, 7};

ll gcd(ll a, ll b){
    return (b == 0) ? a : gcd(b, a%b);
}

ll count(ll num){
    ll ans = 0;

    for(int mask = 1; mask < (1<<4); mask++){
        int LCM = 1;
        int used =0;

        for(int i=0; i<4; i++){
            if(mask & (1<<i)){
                LCM = lcm(LCM, primes[i]);
                used++;
            }
        }

        ll toChange = num/LCM;
        if(used&1)
            ans+=toChange;
        else
            ans-=toChange;
    }

    return num - ans;
}

void solve(){
    ll left, right; cin >> left >> right;
    cout << count(right) - count(left-1) << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}