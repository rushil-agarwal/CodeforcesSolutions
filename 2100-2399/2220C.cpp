#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    ll p, q; cin >> p >> q;
    
    ll totalEdge = p + 2LL*q;
    ll mult = 2*totalEdge + 1;
    ll n = -1, m = -1;

    for(int i =3; i*i <= mult; i+=2){
        if(mult%i == 0){
            ll temp2 = (i-1)/2;
            ll temp3 = (mult/i-1)/2;

            if(q <= temp2*(temp3+1)){
                n = temp2;
                m = temp3;
                break;
            }
        }
    }

    if(n == -1 || m == -1){
        cout << "-1\n";
    } else {
        cout << n << " " << m << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}