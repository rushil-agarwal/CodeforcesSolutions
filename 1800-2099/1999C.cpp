#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(){
    ll n,s,m; cin >> n >> s >> m;
    vector<pair<ll,ll>> vec;
    for(int i=0; i<n; i++) {
        ll a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size()-1; i++){
        if(vec[i+1].first - vec[i].second >= s)
            return true;
    }
    if(m-vec[vec.size()-1].second >= s || vec[0].first >= s)
        return true;
    return false;
}

int main(){

    ll t;
    cin >> t;
    while(t--) {
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}