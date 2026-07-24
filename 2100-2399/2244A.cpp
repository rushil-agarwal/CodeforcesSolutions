#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    int curr = 0, ans = 0;

    for(int i=0; i<n; i++){
        if(str[i] == '*'){
            ans = max(ans, (int)ceil(1.0*curr/2));
            curr = 0;
        } else 
            curr++;
    }

    ans = max(ans, (int)ceil(1.0*curr/2));
    cout << ans << "\n";
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