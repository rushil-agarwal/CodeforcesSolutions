#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin>>n;
    string num  = to_string(n);
    int ans=0;
    for(auto ch:num){
        ans+=ch-'0';
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