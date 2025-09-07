#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s,t; cin >> s >> t;

    int cnts=0;
    while(cnts < min(s.length(), t.length())){
        if(s[cnts] == t[cnts]){
            cnts++;
        } else {
         //   cout << cnts <<  " " << cntt << endl;
            break;
        }
    }

    int ans = cnts + s.length()-cnts + t.length()-cnts;
    if(cnts == 0)
        cout << ans << endl;
    else
        cout << ans+1 << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}