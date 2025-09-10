#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string a,b;
    ll n;
    cin >> n >> a >> b;
    ll diff1=0, diff2 =0;

    for(int i=0;i<n;i++){
        if(a[i] == '1' && b[i] == '0')
            diff2++;
        if(a[i] == '0' && b[i] == '1')
            diff1++;
    }
    ll ans = diff1 + diff2 - min(diff1,diff2);
    cout << ans <<endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}