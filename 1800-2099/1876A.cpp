#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,c;
    cin >> n >> c;
    vector<pair<ll,ll>> vec;
    ll arr[n], brr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    for(int i=0; i<n;i++){
        cin >> brr[i];
        vec.push_back(make_pair(brr[i],arr[i]));
    }
    sort(vec.begin(),vec.end());
    if(vec[0].first >= c){
        cout << n*c << endl;
        return;
    }
    if(n == 1){
        cout << c << endl;
        return;
    }
    ll people = n-1;
    ll ans=0;
    for(ll i=0; i<n;i++){
        if(people == 0)
            break;
        if(vec[i].first >= c)
            break;
        ll temp = min(people, vec[i].second);
        people -= temp;
        ans+=vec[i].first * temp;
//        cout << "People: " << people << "\tans: " << ans << endl;
    }
    cout << ans + people*c + c<< endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}