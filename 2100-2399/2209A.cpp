#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    ll c, k; cin >> c >> k;

    vector<ll> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++){
        if(nums[i] > c)
            break;

        ll temp = min(k, c - nums[i]);
        c += nums[i] + temp;
      //  cout << nums[i] << ' ' << c << ' ' << k << ' ';


        k -= temp;
        //cout << k << '\n';
    }

    cout << c << '\n';

    
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