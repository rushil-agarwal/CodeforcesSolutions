#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    if(n&1){
        cout << 0 << endl;
        return;
    }

    cout << n/4 + 1 << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}