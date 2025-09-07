#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s; cin >> s;
    ll ones=0; ll cost=0;
    for(ll i=0; i<s.length(); i++){
        if(s[i] == '1')
            ones++;
        else{
            if(ones != 0){
                cost += 1 + ones;
            }
        }
    }
    cout << cost << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}