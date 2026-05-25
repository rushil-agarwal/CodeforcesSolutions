#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    unordered_map<int, pair<int, ll>> hash;

    for(auto num: nums){
        int currStep = 0;

        while(true){
            hash[num].first++;
            hash[num].second += currStep;
            currStep++;

            if(num == 2 || num == 1){
                int temp = (num == 1)  ? 2 : 1;
                hash[temp].first++;
                hash[temp].second += currStep;
                break;
            }

            if(num&1)
                num++;
            else
                num /= 2;
        }
    }

    ll ans = LLONG_MAX;

    for(auto &it: hash){
        if(it.second.first == n)
            ans = min(ans, it.second.second);
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