#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll x,y,n;
    cin >> n >> x >> y;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
    ll ans=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if((arr[i] + arr[j])%x == 0 && (arr[i] - arr[j])%y == 0)
                ans++;
        }
    }
    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}