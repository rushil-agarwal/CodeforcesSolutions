#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n; cin >> n;

    if(n<=101){
        cout << "NO" <<endl;
        return;
    } else {
        string num = to_string(n);
        if(num[0]!='1' || num[1]!='0'){
            cout << "NO" <<endl;
            return;
        } else {
            if(num[2]=='0'){
                cout << "NO" <<endl;
                return;
            } else {
                cout << "YES" << endl;
                return;
            }
        }
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}