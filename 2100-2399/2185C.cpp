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

    sort(nums.begin(), nums.end());
    int ans = 1, curr=1;

    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1])
            continue;
        if(nums[i-1] +1 == nums[i])
            curr++;
        else {
            ans = max(ans, curr);
            curr = 1;
        }
    }

    ans = max(ans, curr);

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