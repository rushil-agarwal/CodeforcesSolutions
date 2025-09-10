#include <bits/stdc++.h>
#include<numeric>
#define ll long long int
using namespace std;

void solve(){
    ll n, ans = 1;
    cin >> n;
    vector<ll> vec(n), vec2(n);
    for (int i=0; i<n; i++)
        cin >> vec[i];

//    ll commonGCD = vec[0];
//    for (int i=1; i<n; i++)
//        commonGCD= gcd(commonGCD, vec[i]);

    for (int i=0; i <n-1; i++) {
        //find value which couldve been multiplied to these 2 numbers

        ll currGCD= gcd(vec[i], vec[i+1]);
        ll canDivide = vec[i]/currGCD;

        //common multiple in all values
        if (canDivide != 1)
            ans = lcm(ans, canDivide);

    }

    cout << ans << endl;;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}