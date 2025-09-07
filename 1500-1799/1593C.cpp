#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll hole,mice;
    cin >> hole >> mice;
    vector<ll> positions;
    for(int i=0;i<mice;i++){
        ll temp;
        cin >> temp;
        positions.push_back(hole-temp);
    }
    sort(positions.begin(),positions.end());
    ll sum=0; ll count=0;
    for(int i=0;i<mice;i++){
        if(sum+positions[i]<hole) {
            sum += positions[i];
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
}

int main(){
    ll t; cin >> t;
    while(t--)
        solve();
    return 0;
}