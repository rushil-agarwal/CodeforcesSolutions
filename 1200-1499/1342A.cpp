#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b,x,y,cost=0;
    cin >> a >> b >> x >> y;

    a = abs(a);
    b = abs(b);
    cost = min(a,b)*(min(2*x,y)) + x*(max(a,b) - min(a,b));

    cout << cost << endl;

}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}