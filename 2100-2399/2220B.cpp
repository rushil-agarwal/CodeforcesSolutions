#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    ll n, m; cin >> n >> m;
    vector<ll> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    int cnt = 1;
    for(int i = 1; i<n; i++){
        if(nums[i] == nums[i-1])
            cnt++;
        else {
            if(cnt >= m){
                cout << "NO\n";
                return;
            }
            cnt = 1;
        }
    }

    if(cnt >= m){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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