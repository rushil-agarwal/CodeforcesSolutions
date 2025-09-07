#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> vec;
    ll temp;
    for(int i=0;i<2*n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    ll ans=0;temp =1;
    for(int i=0;i<2*n-1;i++){
        if(vec[i] == vec[i+1]){
            temp+=1;
        } else {
            ans = max(ans,temp);
            temp=1;
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