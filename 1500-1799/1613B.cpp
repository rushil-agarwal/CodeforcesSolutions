#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n;i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if( n == 2){
        cout << v[1] << " " << v[0] << endl;
        return;
    }
    for(int i=1; i<=n/2; i++){
        cout << v[i] << " " << v[0] << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}