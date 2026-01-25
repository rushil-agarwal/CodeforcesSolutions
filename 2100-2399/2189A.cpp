#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, h, l; cin >> n >> h >> l;
    int onlyH=0, onlyL=0, both=0;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        int temp; cin >> temp;

        if(temp <= h && temp<= l)
            both++;
        else if(temp <= h)
            onlyH++;
        else if(temp <= l)
            onlyL++;
    }

    int ans = 0;

    ans += min(onlyH, onlyL);
    int remain = abs(onlyH - onlyL);
    ans += min(both, remain);

    both -= min(both, remain);

    ans += both/2;

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