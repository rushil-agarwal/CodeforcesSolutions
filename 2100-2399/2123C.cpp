#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n), pre(n, INT_MAX), suff(n, INT_MIN);
    string ans = "";



    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    pre[0] = vec[0];
    suff[n-1] = vec[n-1];

    for(int i=1; i<n; i++){
        pre[i] = min(pre[i-1], vec[i]);
    }
    for(int i= n-2; i>=0; i--){
        suff[i] = max(suff[i+1], vec[i]);
    }

    for(int i=0; i<n; i++){
        if(pre[i] == vec[i] || suff[i] == vec[i]){
            ans+='1';
        } else {
            ans+='0';
        }
    }

    //prefix mei minimum

    //suffix mei maxi

    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}