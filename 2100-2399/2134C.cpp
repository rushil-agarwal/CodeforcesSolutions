#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];

    ll ans=0, prev=0;

    for(int i=0; i<n; i+=2){
        ll temp;

        if(i == 0){
            if(i+1 < n)
                temp = min(vec[i], vec[i+1]);
            else
                temp = vec[i];
        } else {
            ll diff = vec[i-1] - prev;
            if(i+1 < n){
                temp = min(min(vec[i], vec[i+1]), diff);
            } else
                temp = min(vec[i], diff);

        }

        ans += vec[i] - temp; prev = temp;

    }

    cout << ans <<endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}