#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> vec1;
    for(int i=0;i<n;i++){
        ll temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    sort(vec1.begin(),vec1.end());
    ll ans=0;
    for(int i=0;i<=n;i++){
        if(i==0 || vec1[i-1]<i){
            if(i==n || vec1[i]>i){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}