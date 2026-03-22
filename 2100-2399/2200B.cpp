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

    vector<ll> processed;
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        auto it1 = lower_bound(processed.begin(), processed.end(), nums[i]);
        auto it2 = upper_bound(processed.begin(), processed.end(), nums[i]);

        int smaller = it1 - processed.begin();
        int greater = processed.size() - (it2 - processed.begin());

        ans[i] = max(smaller, greater);

        processed.insert(it1, nums[i]);
    }

    for(auto it: ans)
        cout << it << " ";

    cout << '\n';
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