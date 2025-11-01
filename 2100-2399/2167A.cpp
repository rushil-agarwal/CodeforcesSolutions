#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a == b && b == c && c == d && d == a){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}