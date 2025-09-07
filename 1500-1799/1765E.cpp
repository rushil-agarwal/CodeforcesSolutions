#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    double n,a,b;
    cin >> n >> a >> b;
    if(a>b){
        cout << "1" << endl;
        return;
    }
    double ans = ceil(n/a);
    cout << fixed  << setprecision(0) << ans << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}