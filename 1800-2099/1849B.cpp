#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> vec1(n);
    for(int i=0;i<n;i++){
        cin >> vec1[i];
    }
    vector<pair<ll,ll>> vec2;
    for(int i=0;i<n;i++){
        ll temp = vec1[i]%k;
        if(temp == 0)
            temp = k;
        vec2.push_back(make_pair(-temp,i));
    }
    sort(vec2.begin(),vec2.end());
    for(int i=0;i<n;i++){
        cout << vec2[i].second +1 << " ";
    } cout << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}