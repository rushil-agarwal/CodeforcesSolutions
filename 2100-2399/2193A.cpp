#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, s, x; cin >> n >> s >> x;
    vector<int> nums(n);

    int total=0;
    for(int i=0; i<n; i++){
        cin >> nums[i];
        total += nums[i];
    }

    int diff = s - total;

    if(diff < 0 || diff%x != 0){
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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