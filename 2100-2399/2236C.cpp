#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

ll funct(ll minE, ll maxE, ll x){
    if(minE == maxE)
        return 0;
    if(minE == 0)
        return maxE;
    
    ll ans = maxE - minE;

    ans = min(ans, funct(min(minE, maxE/x), max(minE, maxE/x), x) + 1);
    ans = min(ans, funct(min(minE/x, maxE), max(minE/x, maxE), x) + 1);

    return ans;
}

void solve(){
    ll minE, maxE, x; cin >> minE >> maxE >> x;

    if(minE > maxE)
        swap(minE, maxE);
    ll ans = maxE - minE;

    vector<ll> div1, div2;

    while(true){
        div1.push_back(minE);
        if(minE == 0)
            break;
        minE /= x;
    }

    while(true){
        div2.push_back(maxE);
        if(maxE == 0)
            break;
        maxE /= x;
    }


    for(int i=0; i<(int)div1.size(); i++){
        for(int j=0; j<(int)div2.size(); j++){

            ans = min(ans, i+j + abs(div1[i] - div2[j]));
        }
    }

    cout << ans << '\n';


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