#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> carrots(m+1, 0);

    for(int i=0; i<n; i++){
        int len; cin >> len;
        carrots[len]++;
    }
    int ans = 0;
    int aage = n;

    for(int i=1; i<=m; i++){
        aage -= carrots[i];
        
        // just take curr
        ans = max(ans, carrots[i]);

        if(i*2 <= m){
            ans = max(ans, carrots[i] + carrots[i*2]*2 + (aage - carrots[i*2]));
        }
    }

    cout << ans << endl;


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