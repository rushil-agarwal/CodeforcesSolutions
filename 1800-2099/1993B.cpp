#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    int ans=0;
    vector<long long int> odd,even;
    for(int i=0; i<n; i++) {
        ll temp; cin >> temp;
        if(temp%2)
            odd.push_back(temp);
        else
            even.push_back(temp);
    }

    if(odd.size()==n || even.size() == n){
        cout << "0" << endl;
        return;
    }

    sort(odd.begin(), odd.end()); sort(even.begin(), even.end());

    int cnt=0;
    while(cnt < even.size()){
        if(odd[odd.size()-1] < even[cnt]){
            odd.push_back(odd[odd.size()-1] + max(even[even.size()-1], odd[odd.size()-2]));
            ans++;
        } else {
            odd.push_back(odd[odd.size()-1] + even[cnt]);
            ans++;
            cnt++;
        }
    }
    cout << ans << endl;
}
//2 2 8
// 3


int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}


