#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    long ans=0;

    if(a > b){
        if(a == b+1 && a&1)
            cout << y << endl;
        else
            cout << -1 << endl;
        return;
    }

    while(a!=b){
        if(a&1){
            ans+=x;
            a++;
        } else {
            if(x < y)
                ans+=x;
            else
                ans+=y;
            a++;
        }
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
