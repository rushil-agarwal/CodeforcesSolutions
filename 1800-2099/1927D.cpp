#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    ll q;
    cin >> q;
    vector<pair<ll,ll>> vec;
    for(int i=0; i<q;i++){
        ll x,y;
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }

    for(int i=0; i<q; i++){
        line:
        if(i == q)break;
        int x=-1; int y=-1;
        for(int j = vec[i].first-1; j<=vec[i].second-1-1;j++){
            if(arr[j] != arr[j+1]){
                cout << j+1 << " " << j+2 << endl;
                i++;
                goto line;
            }
        }
        cout << x << " " << y << endl;

    }

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}