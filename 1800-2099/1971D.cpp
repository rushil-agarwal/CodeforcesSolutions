
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    string s; cin >> s;
    int cnt = 1;bool zerone = false;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == '1'){
            if(s[i+1] == '0'){
                cnt++;
            }
        } else {
            if(s[i+1] == '1') {
                if (zerone) {
                    cnt++;
                } else {
                    zerone = true;
                }
            }
        }
    }
    cout << cnt << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}