#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,m,q; cin >> n >> m >> q;
    int pos1, pos2; cin >> pos1 >> pos2;
    int x; cin >> x;
    if(pos1 > x && pos2 > x){
        //both ahead
        cout << min(pos1, pos2)-1 << endl;
    } else if(pos1<x && pos2 < x){
        //both behind
        cout << n - max(pos1, pos2) << endl;
    } else {
        //he in betyween
        int dist = max(pos1, pos2) - min(pos1, pos2) -1;
        if(dist%2 == 0)
            cout << dist/2 << endl;
        else {
            cout << dist/2+1 << endl;
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