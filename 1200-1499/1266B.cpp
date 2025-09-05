#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n<15) {
        cout << "NO" << endl;
        return;
    }
    n = n%14;

    if(n<7 && 0<n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}