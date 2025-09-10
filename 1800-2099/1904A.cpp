#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b,xk,yk,xq,yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    ll diff = abs(xk - xq) + abs(yk - yq);
    ll ans = diff/(a+b);
    cout << "DIFF: " << diff << endl << "ANS: " << ans << endl;
    if(a+b == 1){
        cout << "1" << endl;
    } else {
        cout << ans <<endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}