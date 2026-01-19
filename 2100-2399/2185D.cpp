#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    ll n, m, h; cin >> n >> m >> h;
    vector<ll> original(n), add(n, 0), last(n, -1);
    ll lastReset = 0;

    for(int i=0; i<n; i++){
        cin >> original[i];
    }

    for(int i=0; i<m; i++){
        ll idx, change;
        cin >> idx >> change;
        idx--;

        if(last[idx] != lastReset){
            add[idx] = 0;
            last[idx] = lastReset;
        }

        add[idx] += change;
        if(original[idx] + add[idx] > h){
            lastReset++;
        }
    }


    for(int i=0; i<n; i++){
        if(last[i] != lastReset)
            cout << original[i] << " ";
        else
            cout << original[i] + add[i];
    }
    cout << endl;
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