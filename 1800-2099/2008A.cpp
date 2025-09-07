#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int a,b; cin >> a >> b;
    bool ans = true;

    if(b%2 == 1){
        if(a>=2){
            a-=2;
        } else {
            ans = false;
        }
    }

    if(a%2 == 1) ans = false;

    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}