#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b;
    cin >> a >> b;
    if(b%a == 0){
        cout << b*b/a << endl;
    } else {
        cout << a*b/gcd(a,b) << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}