#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b;
    cin >> a >> b;
    if(b == 1){
        cout << "NO" << endl;
        return;
    } else {
        cout << "YES" << endl;
        cout << a*b << " " << a << " " << a*(b+1) << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}